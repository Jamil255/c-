#include<iostream>
using namespace std;
int cubeByvalue(int*);
int main(){
int variable=10;
cubeByvalue(&variable) ;
cout<<variable<<endl;
return 0;}
int cubeByvalue(int*mptr){
     *mptr=  *mptr*  *mptr*   *mptr;
     return   *mptr;
}

