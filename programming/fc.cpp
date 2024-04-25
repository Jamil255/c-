#include<iostream>
using namespace std;
int add(int* aptr,int *bptr){
int c =*aptr+*bptr;
return c;} 
int main(){
    int a=1011;
    int b=40;
    cout<<add(&a,&b)<<endl;
    return 0;}

int add(int a,int b){
    cout<<add(a,b)<<endl;
return 0;}



