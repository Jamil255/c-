#include<iostream>
using namespace std;
int main(){
    int a=1;
    int * aptr;
    aptr =&a;
    cout<<*aptr<<endl;
    int**b=&aptr;
    cout<<**b<<endl;
    return 0;


}