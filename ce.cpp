#include<iostream>
using namespace std;
int main(){
    int b=20;
    int *aptr;
    aptr=&b;
    cout<<*aptr<<endl;
    int **q =&aptr;
    cout<<*q<<endl;
    cout<<**q<<endl;
    return 0;

}