#include<iostream>
using namespace std;
void hollejamil(string Name,int age , int height);//prtotype function
int main(){
    hollejamil("anas",65,7.3);// function call
    hollejamil("aness",62,3.3);
    hollejamil("zahoib",63,4.3);
    hollejamil("zahid",64,6.3);
    hollejamil("majid",66,5.3);
    return 0;}
    void hollejamil(string Name,int age, int height){ // function defination
         cout<<Name<<endl;
         cout<<age<<endl;
         cout<<height<<endl;
    }

