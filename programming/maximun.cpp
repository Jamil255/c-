#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"enter three number:";
    cin>>num1>>num2>>num3;
    if(num1>=num2 && num1>=num3){
        cout<<"larger number"<<num1<<endl;
    }
     if(num2>=num1 && num2>=num3){
        cout<<"larger number"<<num2<<endl;
     }
if(num3>=num1&& num3>=num2){
     cout<<"larger number"<<num3<<endl;
}
return 0;}