#include<iostream>
using namespace std;
int main(){
   int n,i,check=0;
   cout<<"enter the number :";
   cin>>n;
   for (int i = 1; i <= n; i++)
   {
if(n%i==0){
    check++;
}
}
if (check==2)
{
    cout<<"prime number";
}
else{
    cout<<"not prime number";}
   

return 0;
}