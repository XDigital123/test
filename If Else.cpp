#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter a Number : ";
    cin>>marks;
    if (marks > 90){
        if (marks > 95) {
            cout<<"your grade is A";
        }      
        else {
            cout<<"your grade is B";
        }
                     
    }
        else {
            cout<<"your number is below 90";
        }
        return 0;
    }
