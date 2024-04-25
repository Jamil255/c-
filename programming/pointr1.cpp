#include<iostream>
using namespace std;
int main(){
    int x, y;
    int *constptr =&x;
    * constptr = 10;
    cout << "value of :" << *constptr;
    return 0;
}