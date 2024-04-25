#include<iostream>
using namespace std;
int cricle(float r);
int main(){
    cricle(3.6);
    return 0;
}
int cricle(float r){
    cout << "the perimenter" << 2 * 3.14 * r << endl;
    cout << "area" << 3.14 * r * r << endl;
    return 0;
}