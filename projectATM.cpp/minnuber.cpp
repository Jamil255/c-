#include <iostream>
using namespace std;
void maximunNumber(int a, int b, int c);
void minimunNumber(int a, int b, int c);
int main()
{
    int num1, num2, num3;
    cout << "enter three numbers:";
    cin >> num1;
    cin >> num2;
    cin>> num3;
    maximunNumber(num1, num2, num3);
    minimunNumber(num1, num2, num3);
    
    return 0;
}
void maximunNumber(int a, int b, int c)
{
    int maximun = a;
    if (b > maximun)
    {
        maximun = b;
    }
    if (c>maximun)
    {
        maximun = c;
    }
    cout<<"the number is maximun" << maximun<<endl;
}
void minimunNumber(int a, int b, int c){
    int minimun = b;
    if (a<minimun)
    {
        minimun = a;
    }
    if (c<minimun)
    {
        minimun = c;
    }
    cout<<"the number is minimun" << minimun<<endl;
    
}
