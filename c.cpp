#include<iostream>
using namespace std ;
int cubeByvalue(int*);
int main(){int variable=12;
cubeByvalue(&variable);
cout<<variable<<endl;
return 0;}
 int cubeByvalue(int*xptr){
     *xptr= *xptr* *xptr* *xptr;
     return *xptr;
 }


