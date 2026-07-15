#include<iostream>
using namespace std;
int main()
{
    int theoryscore,practicalscore;
    cout <<"enter theory score:"<<endl;
    cin>>theoryscore;
    if(theoryscore>=50){
        cout<<"enter practical score:"<<endl;
        cin>>practicalscore;
        if(practicalscore>=50){
            cout<<"you passed in both theory and practical exam:"<<endl;
        }else{
            cout<<"sorry you fail in practical  exam:"<<endl;
        } 
    }else {
            cout<<"sorry you failed in the theory exam"<<endl;
        }
       
    
    return 0;
}