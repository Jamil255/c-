#include<iostream>
using namespace std;
int main(){
    int a=10;
    int * aptr;
    aptr=&a;
    cout<<"value of"<<a<<endl;
    cout<<"value of "<<aptr<<endl;
    cout<<"value of"<<*aptr<<endl;
return 0;
}