#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *bptr;
    cout<<"doesn't store ramdon adress";
    bptr=&a;
cout<<"the value of  "<<a<<endl;
cout<<"the value of   "<<bptr<<endl;
cout<<"the value of  "<<*bptr<<endl;
cout<<"the value of  "<<*&bptr<<endl;
cout<<"the value of   "<<&*bptr<<endl;
return 0;
}