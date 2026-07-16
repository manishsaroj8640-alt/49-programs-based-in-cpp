#include<iostream>
using namespace std;
int main()
{
    try
    {float numerator,denominator,result;
        cout<<"enter numerator:"<<endl;
        cin>>numerator;
        cout<<"enter denominator:"<<endl;
        cin>>denominator;
        
        if (denominator==0){
            throw"division with zero is not allowed";
        }
            result = numerator/denominator;
            cout<<"result of division:"<<result<<endl;
    } catch(const char*errormessage){
        cerr<<"error:"<<errormessage<<endl;
    }      
    return 0;
}