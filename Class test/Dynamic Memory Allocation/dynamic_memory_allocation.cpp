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

class dynamic_memory_allocation
{

public:
    Node *head;
    int count;
    dynamic_memory_allocation()
    {
        this->head = nullptr;
        this->count = 0;
    }

    void insert_at_begging(int value)
    {
        Node *newnode = new Node(value);
        newnode->next = head;
        this->head = newnode;
        this->count++;
    }
    void search(int key)
    {
        Node *ptr = head;
        int position = 0;
        while (ptr != nullptr)
        {
            if (ptr->data == key)
            {
                cout << "Value = " << key << " Position = " << position;
            }
            ptr = ptr->next;
            position++;
        }
    }
    void delete_node(int key)
    {
        if (head == nullptr || count == 0)
        {
            cout << endl
                 << "List is empty......!" << endl;
        }

        Node *prev = this->head;
        Node *current = this->head;
        for (int i = 0; i < key; i++)
        {
            current = current->next;
        }
        for (int i = 0; i < key - 1; i++)
        {
            prev = prev->next;
        }
        prev->next = current->next;
        delete current;
        current = nullptr;
        delete prev;
        prev = nullptr;
    }
    void reverse()
    {
        if (head == nullptr)
        {
            cout << "List is empty.........." << endl;
            return;
        }

        Node *prev = nullptr;
        Node *current = head;
        Node *nextNode = nullptr;

        while (current != nullptr)
        {
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }

        head = prev;
        cout << "List reversed successfully!\n";
    }

    void display()
    {
        Node *ptr = head;
        cout << "Values: ";
        while (ptr != nullptr)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
};