#include<iostream>
using namespace std;
int main(){
    int a=34;
    int* ptr;
    ptr=&a;
    cout<<"value of a"<<a<<endl;
     cout<<"value of &a"<<&a<<endl;
      cout<<"value of *ptr"<<*ptr<<endl;
       cout<<"value of *&ptr"<<*&ptr<<endl;
        cout<<"value of &*ptr"<<&*ptr<<endl;
        return 0;  

}