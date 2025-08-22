#include <iostream>
using namespace std;

int main() {
   char a[50];
   char *ptr=a;
   int count=0;
   cout<<"Enter any name : ";
   cin.getline(a, 50);
     while (*ptr != '\0') {
        ptr++;   // Increase length count
        count++;      // Move pointer to next character
    }
    cout << "Length of name is: " << count << endl;
}