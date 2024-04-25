#include<iostream>
using namespace std;
int main(){
    int array[]= {10,40,56};
    cout<<*array<<endl;
    int *ptr=array;
    for (int  i = 0; i < 3; i++)
    {
       cout<<*ptr<<endl;
       *ptr++;
    }
    


   return 0;
}