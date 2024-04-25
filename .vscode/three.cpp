#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter three numbers:";
    cin>>a>>b>>c;
    if (a>=b || a>=c)
    {
       cout<<"lager number"<<a<<endl;
    }
    if (b>=a || b>=c)
    {
       cout<<"lager number"<<b<<endl;
    }
    if (c>=a || c>=b)
    {
       cout<<"lager number"<<c<<endl;
    }
    
return 0;
}