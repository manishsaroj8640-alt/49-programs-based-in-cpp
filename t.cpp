#include<iostream>
#include<stdexcept>
using namespace std;
void processcomponent ()
{
    try{
        throw runtime_error("error in processing component");
    }catch(const runtime_error & e){
        cerr<<"caught exception in process component:"<<e.what()<<endl;
        throw;
    }
}
void operatesystem()
{
    try
    {
        throw runtime_error("error in procssing component");
    }catch(const runtime_error & e){
        cerr<<"caught exception in process component:"<<e.what()<<endl;
        throw;
    }
}
int main()
{
    try{
        operatesystem();
    }catch(const runtime_error & e){
        cerr<<"caught exception in main:"<<e.what()<<endl;
    }
    return 0;
}