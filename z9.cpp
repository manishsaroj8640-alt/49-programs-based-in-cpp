#include<iostream>
#include<string>
using namespace std;
int main()
{
    string userMessage;
    cout<<"enter a message:"<<endl;
    getline(cin,userMessage);
    cout<<" length of entered message: "<<userMessage.length()<<" character. "<<endl;
    return 0;
}