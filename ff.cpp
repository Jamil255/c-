#include<iostream>
using namespace std;
int main(){
    int n;
    int factorial=1;
    cout<<"enter the number :";
    cin>>n;
    if (n<0)
    {
        cout<<"error! the negative number is not exist:";

    }
    else{
        for (int i = 1; i < n; i++)
        {
           factorial*=i;
           cout<<factorial<<endl;}
        
    }
    return 0;
}