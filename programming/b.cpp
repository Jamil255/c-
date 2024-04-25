#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the number:";
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        cout<<"larger number"<<a<<endl;

    }
     if(b>=a && b>=c){
        cout<<"larger number"<<b<<endl;
    }
     if(c>=a && c>=b){
        cout<<"larger number"<<c<<endl;
    }
    return 0;
}