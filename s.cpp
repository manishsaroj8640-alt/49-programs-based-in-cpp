#include<iostream>
#include<fstream>
using namespace std;
void readfromfile()
{
    ifstream file("example.txt");
    if(!file.is_open()){
        throw runtime_error("unable to open file");
    }
    try{
        throw runtime_error("error while reading from file");
    } catch(const runtime_error & innerexception){
        throw runtime_error("error in readfromfile:"+ string(innerexception.what()));
    }
} int main()
{
    try{
        readfromfile();
    }catch(const runtime_error & outerexception){
        cerr<<"caught outer exception:"<<outerexception.what()<<endl;
    }
    return 0;
}