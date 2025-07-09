#include<iostream>
using namespace std;

main(){

    int a;
    char b;

    cout<<"Enter your marks : ";
    cin>>a;

    b=(a>=90)?'A':
    (a >= 80)?'B':
    (a >= 70)?'C':
    (a >= 60)?'D':
    (a >= 35)?'E':
    'F';

    cout<< " Your Grade is "<<b;

    switch (b)
    {
    case 'A':
        cout<<" Excellent work!";
        break;

    case 'B':   
    cout<<" Well done!";
        break;  
    case 'C':   
    cout<<" Good job!";
        break;  
    case 'D':   
    cout<<" You pass!";
        break;  
    case 'E':   
    cout<<" You pass, but you can do better!";
        break;  
    case 'F':   
    cout<<" Fail!";
        break;  
    
    default:
    cout<<"Invalid Grade";
        break;
    }

    if (b == 'F'){
    cout<<" Better luck next time!";
    }
    else{
    cout<<" Congratulation, Your elible for next level!";
    }

}