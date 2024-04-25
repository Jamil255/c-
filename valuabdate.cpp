#include<iostream>
using namespace std;
int main(){
    int n=10;
    int *ptr;
    ptr=&n;
    cout<<*&ptr<<endl;
     cout<<&*ptr<<endl;
    * ptr =20;// update of value;
cout<<n<<endl;
return 0;
}