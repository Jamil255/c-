#include <iostream>
using namespace std;
void print()
{
    cout << "hello word:";
}
int main()
{ //**// sometime prototype can't use in the case when the one statement print more time//**// 
    print();
    print();
    print();
    print();
    return 0;
}