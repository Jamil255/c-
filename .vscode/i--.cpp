#include<iostream>
using namespace std;
int main(){
    int i=1;
    int j=3;
    int k;
    k= i++ + ++i + j++ + ++j;   // 2+2+4+4
    cout<<k<<endl;//12
    cout<<i<<endl;//2
    cout<<j<<endl;//4
    return 0;
}