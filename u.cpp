#include<iostream>
using namespace std;
class rectangle
{
private:
int length;
int width;

public:
rectangle(int len,int wild) : length(len), width(wild) {
    cout<<" rectangle created with length "<<length<<" and width "<<width<<endl;
}
~rectangle(){
    cout<<"rectangle is destroyed"<<endl;
}
};
int main()
{
rectangle myreact(5,10);
return 0;
}