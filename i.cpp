#include<iostream>
using namespace std;
int main()
{ int score;
    cout<<"enter the students exams score in percentage:"<<endl;
    cin>>score;
    if(score>=90){
        cout<<"Grade'A'(distinction)"<<endl;
       }else if(score>=80){
        cout<<"grade A"<<endl;
    }else if(score>=70){
        cout<<"Grade B"<<endl;
    }else if(score>=60){
        cout<<"Garde C"<<endl;
    }else if(score>=50){
        cout<<"grade D"<<endl;
    }else if(score>=40){
        cout<<"Garde D"<<endl;
    }else {
        cout<<"fail"<<endl;
    }
    return 0;

}