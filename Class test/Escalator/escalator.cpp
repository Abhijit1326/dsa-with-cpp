#include <iostream>
using namespace std;

class Escalator
{
public:
    virtual void push(int element) = 0;
    virtual void pop() = 0;
    virtual void top() = 0;
    virtual void display() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
};

class Stack : public Escalator
{
protected:
    int *arr;
    int size;
    int topIndex;

public:
    Stack(int n)
    {
        this->size = n;
        this->arr = new int[n];
        this->topIndex = -1;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(int element)
    {
        if (this->topIndex == this->size - 1)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            this->topIndex++;
            this->arr[this->topIndex] = element;
        }
    }

    void pop()
    {
        if (this->topIndex == -1)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            cout << "Popped: " << this->arr[this->topIndex] << endl;
            this->topIndex--;
        }
    }

    void top()
    {
        if (this->topIndex == -1)
        {
            cout << "Stack is Empty." << endl;
        }
        else
        {
            cout << "Top Element: " << this->arr[this->topIndex] << endl;
        }
    }

    void display()
    {
        if (this->topIndex == -1)
        {
            cout << "Stack is Empty." << endl;
        }
        else
        {
            for (int i = this->topIndex; i >= 0; i--)
                cout << this->arr[i] << " ";
            cout << endl;
        }
    }

    bool isEmpty()
    {
        if (this->topIndex == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        (this->topIndex == this->size - 1) ? cout << "Satck is full...." << endl : cout << "Satck is not full...." << endl;
    }
};

int main()
{
    int n;
    cout << "Enter size of stack: ";
    cin >> n;

    Stack s(n);
    int choice, element;

    do
    {
        cout << "Press 1 for push value";
        cout << "Press 2 for pop value";
        cout << "Press 3 for top value";
        cout << "Press 4 for isEmpty";
        cout << "Press 5 for isFull";
        cout << "Press 6 for display";
        cout << "Press 0 for exit";
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the element : ";
            cin >> element;
            s.push(element);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.top();
            break;
        case 4:
            s.isEmpty() ? cout << "Stack is empty...." << endl : cout << "Stack is not empty...." << endl;
            break;
        case 5:
            s.isFull() ? cout << "Stack is full...." << endl : cout << "Stack is not full...." << endl;
            break;
        case 6:
            s.display();
            break;
        case 0:
            cout << "Please visit Again.....!" << endl;
            break;
        default:
            cout << "Invalid choice.........!" << endl;
            break;
        }
    } while (choice != 0);
}
