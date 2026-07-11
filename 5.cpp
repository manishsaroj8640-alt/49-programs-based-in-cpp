#include <iostream>
using namespace std;
int main()
{
    int number,i;
    cout << "enter a number: " << endl;
    cin >> number;
    cout << " multiplication table " << number << "/n" << endl;
for(int i = 1; i <= 10; ++i)
{
    cout << number << "*"<<i<<"="<<(number * i)<< endl;
}
return 0;
}  