#include<iostream>
using namespace std;
int number(int a);
int main(){
    int a;
    cout << "enter the number:";
    cin >> a;
    number(a);
    cout << number(a);
    return 0;
}
int number(int a){
if (a%2==0)
{
    cout <<"the number is even:"<< a<<endl;

}
else{
    cout << "the number is odd:" << a << endl;
}
return 0;
}