#include<iostream>
using namespace std;
int cubeByvariable(int*);
int main(){
    int value=7;
     cubeByvariable(& value);
        cout<<value<<endl;
        return 0;}
        int cubeByvariable(int*yptr){
            *yptr=*yptr**yptr**yptr;
            return *yptr;
        }


