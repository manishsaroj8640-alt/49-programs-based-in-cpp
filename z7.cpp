#include<iostream>
#include<string>
using namespace std;
int main(){
    string greeting =" Hello ";
    string userName;
    cout<<"enter your name:";
    getline(cin,userName);
    string personalizedGreeting = greeting + userName + " ";
    cout<< personalizedGreeting <<" welcome to my program "<<endl;
    return 0;
}