#include<iostream>
using namespace std;
int main(){
    int a=20;
    int*bptr;
    bptr=&a;
    cout<<bptr<<endl;
    bptr++;
    cout<<bptr<<endl;
    return 0;

}