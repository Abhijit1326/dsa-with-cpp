        //     *   *   *  
        // *              * 
        // *                   
        // *        *  *  * 
        // *                *   
        // *               *  
        //     *    *   *





#include<iostream>
using namespace std;

main(){
    int i;
    for(i=1;i<=6;i++){
        if(i==1||i==6){
            cout<<" **** ";
        }
        else if(i==2||i==5||i==6){
            cout<<"*    *";
        }
       else if (i==4){
            cout<<"*  ***";
        }
        else{
            cout<<"*";
        }
        cout<<endl;
    }
}