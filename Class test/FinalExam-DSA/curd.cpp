#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class List
{
private:
    Node *head;

public:
    List()
    {
        head = nullptr;
    }

    void insert(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        cout << value << " added to the list." << endl;
    }

    void deleten(int position)
    {
        if (!head)
        {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }

        if (position == 0)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            cout << "Deleted node at position " << position << endl;
            return;
        }

        Node *current = head;
        Node *prev = nullptr;
        int count = 0;

        while (current && count < position)
        {
            prev = current;
            current = current->next;
            count++;
        }

        if (!current)
        {
            cout << "Position " << position << " is out of range." << endl;
            return;
        }

        prev->next = current->next;
        delete current;
        cout << "Deleted node at position " << position << endl;
    }

    void display()
    {
        if (!head)
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *current = head;
        while (current)
        {
            cout << current->data;
            if (current->next)
                cout << " ";
            current = current->next;
        }
        cout << endl;
    }

    void search(int position)
    {
        if (!head)
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *current = head;
        int count = 0;

        while (current)
        {
            if (count == position)
            {
                cout << "Value at position " << position << " is " << current->data << endl;
                return;
            }
            current = current->next;
            count++;
        }

        cout << "Invalid index." << endl;
    }
};

int main()
{
    List list;
    int choice, element, position;

    do
    {
        cout << endl
             << "Menu:" << endl;
        cout << "1. Add Element" << endl;
        cout << "2. Delete Element" << endl;
        cout << "3. Display List" << endl;
        cout << "4. Search Element by Position" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter element: ";
            cin >> element;
            list.insert(element);
            break;

        case 2:
            cout << "Enter position to delete: ";
            cin >> position;
            list.deleten(position);
            break;

        case 3:
            cout << "List: ";
            list.display();
            break;

        case 4:
            cout << "Enter position to search: ";
            cin >> position;
            list.search(position);
            break;

        case 0:
            cout << "Exiting!" << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 0);

    return 0;
}