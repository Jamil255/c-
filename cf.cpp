#include<iostream>
using namespace std;
int main(){
int a=10;
int*  bptr=&a;
cout<<* bptr<<endl;
//pointer to pointer 
int** cptr=&bptr;
cout<<*cptr<<endl;
cout<<**cptr<<endl;

return 0;
}