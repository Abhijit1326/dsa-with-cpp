#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <typename T1, typename T2>
class Student
{
protected:
    vector<T1> ID;
    vector<T2> NAME;

public:
    void AddStudent(const T1 &id, const T2 &name)
    {
        ID.push_back(id);
        NAME.push_back(name);
        cout << "Added......!";
    }
    void DisplayAllStudent()
    {
        if (ID.empty())
        {
            cout << "Add kar pehle bhag......!" << endl;
        }
        for (int i = 0; i < ID.size(); ++i)
        {
            cout << "Student ID : " << ID[i] << endl;
            cout << "Student NAME : " << NAME[i] << endl;
        }
    }
    void RemoveStudent(const T1 &id)
    {
        for (int i = 0; i < ID.size(); ++i)
        {
            if (ID[i] == id)
            {
                ID.erase(ID.begin() + i);
                NAME.erase(NAME.begin() + i);
                cout << id << " removed successfully!" << endl;
            }
        }
        cout << id << " not found!" << endl;
    }
    void SearchStudent(const T1 &id)
    {
        for (int i = 0; i < (int)ID.size(); ++i)
        {
            if (ID[i] == id)
            {
                cout << "Student found!" << endl;
                cout << "ID: " << ID[i] << " | Name: " << NAME[i] << endl;
            }
        }
        cout << id << " not found!" << endl;
    }
    int getTotalStudents()
    {
        return ID.size();
    }

    bool isEmpty()
    {
        return ID.empty();
    }
};

void DisplayMenu()
{
    cout << endl
         << "----------------------------------" << endl;
    cout << "Press 1 for Add Student" << endl;
    cout << "Press 2 for Display All Students" << endl;
    cout << "Press 3 for Remove Student by ID" << endl;
    cout << "Press 4 for Search Student by ID" << endl;
    cout << "Press 5 for Get Total Number of Students" << endl;
    cout << "Press 0 for Exit" << endl;
}