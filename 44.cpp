#include<iostream>
using namespace std;
int main()
{
    int num1 = 5, num2 = 8;
cout<<" original value : num1= "<< num1 <<" original values : num2 ="<<num2<<endl;
int temp = num1;
 num1 = num2;
 num2 =   temp;
cout<<" swapped values : num1 = " << num1 <<" swappped value of num2 "<< num2 << endl;
return 0;
}