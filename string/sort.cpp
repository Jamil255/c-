#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s1 = "helloword";
    sort(s1.begin(), s1.end());
    cout << s1;
    return 0;
}