#include<iostream>
using namespace std;
int main(){
    int arra[]={1,2,3};
    cout<<*arra<<endl;
    int *aptr =arra;
    for(int i=0;i<3;i++){
        cout<<*aptr<<endl;
        *aptr++;}
    
    return 0;
}