#include<iostream>
using namespace std;
int main(){
    int a=30;
    int*aptr;
    aptr=&a;
    cout<< * aptr<<endl;
  * aptr=40;
    cout<<a<<endl;
    return 0;
  

}