#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "helloword";
    s1.insert(9, "class");
    cout << s1;
    return 0;
}