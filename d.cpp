#include<iostream>
using namespace std;
int main()
{
    int num1 = 20;
    int num2 = 40;
    cout<<"original values: num1 ="<< num1 <<",num2 = "<< num2 <<endl;
    num1 = num2;
    cout<<"after basic assignment : num1 ="<< num1 <<",num2 ="<< num2<< endl;
    num1 +=3;
    cout<<"after addition : num1 =" <<num1<<endl;
    num2 -=5;
    cout<<"after subtraction :num2="<<num2<<endl;
    return 0;
}