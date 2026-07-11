
#include<iostream>
#include<vector> //new header
using namespace std;
 int main()
 {
    
cout<< "using for iostream's cout to print"<<endl;
vector <int> v{11,22,14};
cout <<"using vector container:"<<endl;
for(auto i:v)
cout<<i<<" ";
 
return 0;
 }