#include<iostream>
using namespace std;
int main()
{
    {
        cout<<"hello from block1!\n";
        {
            cout<<"hello from block2!\n";
        }

}
return 0;
}