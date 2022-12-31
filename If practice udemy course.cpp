#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter a number";
    cin>>marks;
    if (marks > 90){ 
        if (marks > 95){
            cout<<"Your is grade is A++";
        }
        else {
           cout<<"your grade is A";
        }
    
    }
    else {
        cout<<"your number is below 90";
    }
    return 0;
}