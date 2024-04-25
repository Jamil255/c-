#include<iostream>
using namespace std;
int main(){
    int *p;
    cout<<"doesn't soter the random a adresss:";
    int i=5;
    p=&i;
    int j=*p;
    cout<<j<<endl;
    return 0;
}
