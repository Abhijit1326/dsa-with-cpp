#include "dynamic_memory_allocation.cpp"

int main()
{
    dynamic_memory_allocation dam;
    int value, key, choice;

    do
    {
        cout << endl
             << endl;

        cout << "Press 1 for insert value from beginning" << endl;
        cout << "Press 2 for search value" << endl;
        cout << "Press 3 for delete from any position" << endl;
        cout << "Press 4 for reverse" << endl;
        cout << "Press 5 for display" << endl;
        cout << "Press 0 for exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value = ";
            cin >> value;
            dam.insert_at_begging(value);

            break;

        case 2:
            cout << "Enter the value for search = ";
            cin >> key;
            dam.search(key);

            break;

        case 3:
            cout << "Enter position for delete value = ";
            cin >> key;
            dam.delete_node(key);

            break;

        case 4:
            dam.reverse();
            break;
        case 5:
            cout << endl
                 << "------------Display Values------------" << endl;
            dam.display();

            break;

        case 0:
            cout << "Exit........!";

            break;

        default:
            cout << "Invalid Choice............" << endl
                 << "Please select give choice!";
            break;
        }
    } while (choice != 0);

    return 0;
}