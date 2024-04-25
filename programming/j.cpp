#include<iostream>
using namespace std;
 int cubeByvalue(int);//prototype
int main(){
    int number =4;
    // cout<<"this  number is:";
    number=cubeByvalue(number);//function call 
    cout<<number<<endl;
    return 0;

}
int cubeByvalue(int n) //function defination 
{
    return n*n*n;
}

