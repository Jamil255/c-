#include<iostream>
using namespace std;
int main(){
    int c=20;
    int* aptr;
    aptr=&c;
    cout<<aptr<<endl;
    aptr--;
    cout<<aptr<<endl;
    return 0;
}