#include<iostream>
using namespace std;
void holleword();//prtotype
void goodbye();
int main(){
holleword();//function call
goodbye();
goodbye();

return 0;
}
void holleword(){//function definition
    cout<<"holle"<<endl;
}
void goodbye(){
    cout<<"goodbye"<<endl;
}
