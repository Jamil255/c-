#include <iostream>
using namespace std;
int cubebyValue(int *); ///*****prototype
int main()
{
    int a;
    cout << "enter   the number   :";
    cin >> a;
   a= cubebyValue(&a);
   cout << a;
   return 0;
}
int cubebyValue(int*nptr){///***function defination
  *nptr =*nptr  *   *nptr * *nptr;
 return *nptr;}