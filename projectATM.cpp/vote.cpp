#include<iostream>
using namespace std;
void vote(int age);
int main()
{
    int age;
    cout << "enter the age:";
    cin >> age;
    vote(age);
    
    return 0;
} 
void vote(int age){
    if ( age>=18)
    {
        cout << "they can be given vote:" <<age<< endl;
}
else{
        cout << "you are teenager:";
}}

