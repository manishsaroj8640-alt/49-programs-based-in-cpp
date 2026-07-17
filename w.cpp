#include<iostream>
using namespace std;
int main()
{
    int quantity = 10, totalItem = 100;
    double price = 25.75,discount = 0.3;

    string productname = "widget";
    double totalcost = quantity*price*(1-discount);
    cout<<"product:"<<productname<<endl;
    cout<<"Total cost:$"<<totalcost<<endl;
    return 0;
}