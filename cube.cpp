#include<iostream>
using namespace std;
int cubeByvalue(int);

int main(){
    int  number = 6;
    cout << "the orginal value of *a*:" <<number<< endl;
        number =cubeByvalue(6);
    cout << "the new  value of *a*:" <<number<< endl;
    return 0;
}

int cubeByvalue(int n ){
    return n * n * n;}