#include<iostream>
using namespace std;
int cubeByvalue(int*); 
int main(){
int number =14;
cubeByvalue(&number);
cout<<number<<endl;
return 0;
}
int cubeByvalue(int*iptr){
    *iptr=*iptr* *iptr * *iptr;
    return *iptr;
}
