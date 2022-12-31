#include<iostream>
#include<string>
using namespace std;
int main(){
    string letters[2][2][2] = {
        {
            { "A", "B"},
             { "C", "D"}
        },
        {
             { "E", "F"}, 
              { "G", "H"}
        }
    };
    cout<<letters [0][0][0]<<"\n";
    cout<<letters [0][0][1]<<"\n";
    cout<<letters [0][1][0]<<"\n";
cout<<letters [0][1][1]<<"\n";
cout<<letters [1][0][0]<<"\n";
cout<<letters [1][0][1]<<"\n";
cout<<letters [1][1][0]<<"\n";
cout<<letters [1][1][1]<<"\n";
}