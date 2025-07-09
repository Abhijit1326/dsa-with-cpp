#include <iostream>
using namespace std;

main(){

    int a;
    cout<<"Enter 1 For english" <<endl;
    cout<<"Gujarati mate 2 dabao" <<endl;
    cout<<"Marathi sathi 3 daba" <<endl;
    cout<<"Hindi ke liye 4 dabao" <<endl;
    cin>>a;

    switch (a)
    {

        // English keys
    case 1:
        cout<<"1 for internet recharge"<<endl;
        cout<<"2 for TOP-UP recharge"<<endl;
        cout<<"3 for Special recharge"<<endl;
        int b;
        cin>>b;
        switch (b)
        {
        case 1:
            cout<<"You have done successfully internet recharge";
            break;
        case 2:
            cout<<"You have done successfully TOP-UP recharge";
            break;
        case 3:
            cout<<"You have done successfully Special recharge";
            break;
        
        default:
           cout<<"Invalid choice";
        }
        break;

        // Gujarati keys
    case 2:
        cout<<"1 internet recharge mate"<<endl;
        cout<<"2 TOP-UP recharge mate"<<endl;
        cout<<"3 Special recharge mate"<<endl;
        int c;
        cin>>c;
        switch (c)
        {
       case 1:
            cout<<"Tame safaltapurvak internet recharge karyu chhe";
            break;
        case 2:
            cout<<"Tame safaltapurvak TOP-UP recharge karyu chhe";
            break;
        case 3:
            cout<<"Tame safaltapurvak Special recharge karyu chhe";
            break;
        
        default:
           cout<<"Tame galt key press karyu chhe";
        }
        break;

        // Marathi keys
    case 3:
        cout<<"1 internet recharge sathi"<<endl;
        cout<<"2 TOP-UP recharge sathi"<<endl;
        cout<<"3 Special recharge sathi"<<endl;
        int d;
        cin>>d;
        switch (d)
        {
        case 1:
            cout<<"Tumche internet recharge yashsvi purn zaley";
            break;
        case 2:
            cout<<"Tumche TOP-UP recharge yashsvi purn zaley";
            break;
        case 3:
            cout<<"Tumche Special recharge yashsvi purn zaley";
            break;
        
        default:
           cout<<"Chuki cha number click kelay tumhi";
        }
        break;

        // Hindi keys
    case 4:
        cout<<"1 dabaye internet recharge ke liye"<<endl;
        cout<<"2 dabaye TOP-UP recharge ke liye"<<endl;
        cout<<"3 dabaye Special recharge ke liye"<<endl;
        int e;
        cin>>e;
        switch (e)
        {
        case 1:
            cout<<"Aapka internet recharge safltapuravk ho gaya hai";
            break;
        case 2:
            cout<<"Aapka TOP-UP recharge safltapuravk ho gaya hai";
            break;
        case 3:
            cout<<"Aapka Special recharge safltapuravk ho gaya hai";
            break;
        
        default:
           cout<<"Galt ki dabai";
        }
        break;
    
    default:
    cout<<"Invalid choice";
        break;
    }

}