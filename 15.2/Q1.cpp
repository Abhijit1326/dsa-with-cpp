#include <iostream>
using namespace std;

class Num
{
protected:
    double value;

public:
    void setNumber()
    {
        cout << "Enter any number : ";
        cin >> this->value;
    }
    void getNumber()
    {
        cout << "This is the higher number = " << this->value;
    }

    Num operator>(Num object)
    {
        Num a;
        if (this->value > object.value)
        {
            a.value = this->value;
        }

        else
        {
            a.value = object.value;
        }
        return a;
    }
};