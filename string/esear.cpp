#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "helloword";
    s1.erase(4, 3);
    cout << s1;
    return 0;
}