#include<iostream>
using namespace std;
int main(){
    int n;
    int factorail=1;
    cout<<"enter the positive integers:";
    cin>>n;
    if(n<0){
        cout<<"error! the negative number does not exist:";
    }
    else{
        for (int i = 1; i <=n; ++i)
        {
            factorail*=i;
            cout<<factorail<<endl;}}
            return 0;}