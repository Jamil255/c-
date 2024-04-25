#include<iostream> 
using namespace std;
int main(){
    int *iptr;
    int i = 5;
    iptr = &i;
    cout << *iptr;//***************value store i the pointer*************//
    return 0;
}