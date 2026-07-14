#include<iostream>
using namespace std;
int main()
{
    int age=25;
    bool isStudent = true;
    
    if (age >= 18 && isStudent){
        cout<<"you are eligible for discount\n"<<endl;
    }else{
        cout<<"you are not eligible for discount\n"<<endl;
    }
    if(age<=18 || isStudent){
        cout<<"you are qualified for some special offers\n"<<endl;
    }else{
        cout<<"explore our regular offer\n"<<endl;
    }
    bool isAdult =! (age<18);
    cout<<"Is the person an adult?"<<boolalpha<<isAdult<<endl;

    return 0;
}