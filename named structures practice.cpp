#include<iostream>
#include<string>
using namespace std;
int main(){
    struct {
     int mynum;
     string mystring;
    } mystructure;
     
     mystructure.mynum = 1;
     mystructure.mystring = "hello world";

     cout<<mystructure.mynum<<" "<<endl;
     cout<<mystructure.mystring<<" "<<endl;
     return 0;
}