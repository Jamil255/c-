#include<iostream>
using namespace std;
int main(){
    cout <<"welcome to my screen"<<endl;
    cout << "enter two number:"<<endl;
    float n1, n2;
    int sum, sub, mul ;
    float div;
    cout << "enter the number for n1"<<endl;
    cin >> n1;
    cout << "enter the number for n2"<<endl;
    cin >> n2;
    sum = n1 + n2;
    sub = n1 - n2;
    mul = n1 * n2;
    div = n1/n2;
    cout << "the sum of n1 and n2" << sum << endl;
    cout << "the sub of n1 and n2" << sub << endl;
    cout << "the mul of n1 and n2" << mul << endl;
    cout << "the div of n1 and n2" << div << endl;


    return 0;
}
