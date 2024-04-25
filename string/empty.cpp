#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "hello";
    s1.clear();
    cout << s1<<endl;
    if (!s1.empty())
    {
        cout << "string is empty:"<<endl;

    }
    return 0;
}