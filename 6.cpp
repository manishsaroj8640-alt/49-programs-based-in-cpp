
#include<iostream>
using namespace std;
 int main()
 {
    int fourdigitnumber;
cout<< "enter four digit numbers"<<endl;
cin>> fourdigitnumber;
int first_digit = fourdigitnumber/1000;
int last_digit = fourdigitnumber%10;
cout<<"first digit:"<<first_digit<<endl;
cout<<"last digit:"<<last_digit<<endl;
return 0;
 }