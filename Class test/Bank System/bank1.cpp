#include <iostream>
using namespace std;

class BankAccount
{
protected:
    int accountNumber;
    char accountHolderName[50];
    float balance;
    double amount;

public:
    void bankAccount()
    {
        cout << "Enter Your Account Number: ";
        cin >> this->accountNumber;
        fflush(stdin);
        cout << "Enter Your Account Holder Name: ";
        gets(this->accountHolderName);
        cout << "Enter Balance: ";
        cin >> this->balance;
    }
    void deposit()
    {
        cout << "Enter deposit amount : ";
        cin >> this->amount;
        balance += amount;
    }

    void setWithdraw()
    {
        cout << "Enter withdraw amount : ";
        cin >> this->amount;
        balance -= amount;
    }
    void withdraw()
    {
        if (amount >= balance)
        {
            cout << endl
                 << "Insufficient balance.";
        }
        else
        {
            balance -= amount;
        }
    }

    void getBalance()
    {
        cout << "Current balance = " << this->balance;
    }
    void displayAccountInfo()
    {
        cout << "Account Number : " << this->accountNumber;
        cout << "Acount Holder Number : " << this->accountHolderName;
        cout << "Balance : " << this->balance;
    }
    void returnBalance()
    {
        balance;
    }
};

class SavingAccount : public BankAccount
{
    float Rate;

public:
    void calculateInterest()
    {
        Rate = 0.05;
        balance *= (1 + Rate);
    }
};

class CheckingAccount : public BankAccount
{
    float OverDraftLimit;

public:
    void checkOverdraft()
    {
        OverDraftLimit = 5894.26;
        setWithdraw();

        if (amount > (balance + OverDraftLimit))
        {
            cout << "Limit jyada ho gayi hai withdraw nhi kar sakte.....";
        }
        else
        {
            long double overdraftUsed = 0;

            if (amount > balance)
            {
                overdraftUsed = amount - balance;
            }

            balance -= amount;

            cout << "Withdrawal successfully. New balance: " << balance << endl;

            if (overdraftUsed > 0)
            {
                cout << "Overdraft used: " << overdraftUsed << endl;
            }
        }
    }
    void runMenu()
    {
        int choice;
        do
        {
            cout << endl
                 << endl
                 << "Select an Option:" << endl
                 << "1 for Check Balance" << endl
                 << "2 for Deposit Amount" << endl
                 << "3 for Withdraw Amount" << endl
                 << "4 for View Account Info" << endl
                 << "0 for Exit" << endl
                 << "Choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                getBalance();
                break;

            case 2:
                deposit();
                break;

            case 3:
                checkOverdraft();
                break;

            case 4:
                displayAccountInfo();
                break;

            case 0:
                cout << "Exiting program...";
                break;

            default:
                cout << "Invalid choice. Please try again.";
                break;
            }

        } while (choice != 0);
    }
};

// child class
class FixedDipositeAmount : public BankAccount
{
    int term;
    float dipositInterest;

public:
    void calculateInterest()
    {
        term = 12;
        dipositInterest = balance * 0.05 * (10.0 / term);
        cout << "\nFixed Deposit Interest: " << this->dipositInterest;
    }
};