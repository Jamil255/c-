// 
#include<iostream>
using namespace std;
int primeNumber(int n);
int main(){
    int n, i, count = 0;
    cout << "enter the number:";
    cin >> n;
    return 0;
}
int primeNumner(int n ){
    for (int i = 2; i <=n; i++)
    {
        if (n%i==0)
        {
            count++;
        }
        
    }
    if(count==2){
        cout << primeNumber;

    }
    else
        cout << notprimenumber;
}