#include<iostream>
using namespace std;
void innerfunction(){
    throw runtime_error("exception in innerfunction");
}
void middlefunction(){
    innerfunction;
}
void outerfunction(){
    try{
        middlefunction();
    }catch(const runtime_error & e){
        cerr<<"caught exception:"<<e.what()<<endl;
    }
}
int main()
{
    outerfunction();
    return 0;
}