#include<iostream>
using namespace  std;
int main(){
    int *aptr;       
    int a;
    a = 4;
    aptr = &a;
    cout << "the memory loaction " << &a <<  endl;
    cout << "the memory loaction " << &aptr <<  endl;
    cout << "the memory loaction " << *aptr <<  endl;
    cout << "the memory loaction " << a <<  endl;
    cout << "the memory loaction " << *&aptr <<  endl;
    cout << "the memory loaction " << &*aptr <<  endl;
    // cout << "the memory loaction " << &a <<  endl;
    // cout << "the memory loaction " << &a <<  endl;
    return 0;
}