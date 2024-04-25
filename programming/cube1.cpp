#include<iostream>
using namespace  std;
double cube(double num);
int main(){

cube(8);
cout<< cube(6);


    return 0;
}
double cube(double num){
     double result= num* num* num;
    return result;
}
