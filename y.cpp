#include<iostream>
using namespace std;
int main()
{
    const int MAX_VALUE=100;
    int userVALUE;
    cout<<"enter a value:";
    cin>>userVALUE;
    if(userVALUE>MAX_VALUE){
        cout<<"value exceeds the maximum limit"<<endl;
    }else{
        cout<<"value is within the acceptable range:"<<endl;
    }
    return 0;
}