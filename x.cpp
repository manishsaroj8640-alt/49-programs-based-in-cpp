#include<iostream>
using namespace std;
int calculateSum(int a, int b);
int main(){
    int num1=5;
    int num2=10;
    int result;
    result = calculateSum(num1,num2);
    cout<<"sum:"<<result<<endl;
    return 0;
}
int calculateSum(int a,int b){
    return a+b;
}