#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter three number:";
    cin>>a>>b>>c;
    if(a>=b &&a>=c){
        cout<<"large value"<<a<<endl;
    }
    if(b>=a &&b>=c){
        cout<<"large value"<<b<<endl;
}
if(c>=a &&c>=b){
        cout<<"large value"<<c<<endl;}
        return 0;}