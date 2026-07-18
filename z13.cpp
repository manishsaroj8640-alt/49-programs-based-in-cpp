#include<iostream>
#include<string>
using namespace std;
int main(){
    int userAge;
    cout<<"enter your age: ";
    cin>>userAge;
    string favoriteColor;
    cout<<"enter your favorite color: ";
    cin>>favoriteColor;
    cout<<"you are "<< userAge <<"years old and your favorite color is "<< favoriteColor <<"."<<endl;
    return 0;
}