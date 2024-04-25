#include<iostream>
using namespace std;
int cubeByvalue(int* );//prototype 
int main(){
int variable=12;
cubeByvalue( &variable);// function call 
    cout<<variable<<endl;
    return 0;}
int cubeByvalue (int* xptr){  // function defination
   *xptr=*xptr * *xptr * *xptr;
   return *xptr;
} 