#include<iostream>
using namespace std;
int main(){
    int a=40;
    int* aptr =&a;
    cout<< &* aptr<<endl;
    * aptr =10;
    cout<<a<<endl;
    return 0;
}