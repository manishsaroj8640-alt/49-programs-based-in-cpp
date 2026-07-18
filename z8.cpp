#include<iostream>
#include<string>
using namespace std;
int main()
{
    double price;
    string productName;
    cout<<"enter the product name:";
    getline(cin,productName);
    cout<<"enter the price:$";
    cin>>price;
    cout<<" the product "<<productName<<" cost $ "<<price<<" .buy it now! "<<endl;
    return 0;
}