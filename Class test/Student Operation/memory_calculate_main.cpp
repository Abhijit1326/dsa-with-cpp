#include "memory_calculate.cpp"

int main()
{
    Student<int, string> manage;
    int choice, StudentID;
    char StudentName[50];

    do
    {
        DisplayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << endl
                 << "Enter Student ID: ";
            cin >> StudentID;
            fflush(stdin);
            cout << "Enter Student Name: ";
            gets(StudentName);

            string nameStr = StudentName;
            manage.AddStudent(StudentID, nameStr);
            break;
        }

        case 2:
            cout << endl
                 << "Displaying all students..." << endl;
            manage.DisplayAllStudent();
            break;

        case 3:
            cout << endl
                 << "Enter Student ID to remove: ";
            cin >> StudentID;
            manage.RemoveStudent(StudentID);
            break;

        case 4:
            cout << endl
                 << "Enter Student ID to search: ";
            cin >> StudentID;
            manage.SearchStudent(StudentID);
            break;

        case 5:
            cout << endl
                 << "Total number of students: " << manage.getTotalStudents() << endl;
            break;

        case 0:
            cout << endl
                 << "Thank you.....!" << endl;
            cout << "Visit Again!" << endl;
            break;

        default:
            cout << endl
                 << "Invalid choice.............!" << endl;
        }

    } while (choice != 0);
}