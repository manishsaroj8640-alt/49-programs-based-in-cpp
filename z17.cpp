#include<iostream>
using namespace std;
int main()
{
    int*arrayPtr = new int[3];
    for(int i=0;i<3;i++){
        arrayPtr[i]=i*10;
    }
    cout<<"Array element:";
    for(int i=0;i<3;i++){
        cout<<*(arrayPtr + i)<<" ";
    }
    *(arrayPtr + 1)=999;
    cout<<"\n Modified Array:";
    for(int i = 0;i<3;i++){
        cout<<arrayPtr[i]<<" ";
   }
   delete[] arrayPtr;
   return 0;
}