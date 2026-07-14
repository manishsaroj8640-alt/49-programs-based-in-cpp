#include<iostream>
using namespace std;
int main()
{ int day;
    cout<<"enter a number(1-7):"<<endl;
    cin>>day;
    switch (day)
    {
    case 1:
     cout<<"Sundya"<<endl;
        break;
     case 2:
    cout<<"Monday"<<endl;
    break;
    case 3:
        cout<<"Tuesday"<<endl;
        break;
     case 4:
        cout<<"Wednesday"<<endl;
        break;
     case 5:
        cout<<"Thursday"<<endl;
        break;
     case 6:
        cout<<"Friday"<<endl;
        break;
    case 7:
        cout<<"Satday"<<endl;
        break;
    default:
        cout<<"invalid entry"<<endl;
    }
    
    return 0;

}