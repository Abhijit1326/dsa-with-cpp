#include<iostream>
using namespace std;

main(){
    int i;
    for(i=1; i<=7; i++){
        if(i==1||i==3){
            cout<<"*****";
        }
        else if(i==2){
            cout<<"*   *";
        }
        else{
            cout<<"*";
        }
        cout<<endl;
    }
}