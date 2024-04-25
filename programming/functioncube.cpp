#include<iostream>
using namespace std;
int main(){
    int i, n, count = 0;
    cout << "enter a number:";
    cin >> n;
    for (int i = 2; i <= n; i++)
    {if (n%i==0)
    {
       count =count+1;
        }}
    if (count==1)
    {
        cout<<"prime number"<<endl;
    }
    else{
        cout<<"not prime number"<<endl;
}
return 0;}