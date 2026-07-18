#include<iostream>
#include<string>
using namespace std;
struct person
{
    string name;
    int age;
    double height;
};
int main()
{

    person john;
    john.name ="John Smith";
    john.age =28;
    john.height=175.5;
    cout<<"person information:"<<endl;
    cout<<"Name"<<john.name<<endl;
    cout<<"Height:"<<john.height<<endl;
    return 0;
}