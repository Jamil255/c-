#include<iostream>
using namespace std;
struct car{
    string  brand;
    string  model;
    int year;
};
int main(){
    car  myCar1;
 myCar1.brand = "BMW";
 myCar1.model = "X4";
 myCar1.year = 2000;
 cout <<" the brand"<<""<< myCar1.brand << endl;
 cout <<"the model"<<""<< myCar1.model<<endl;
 cout<<"the year "<<""<<myCar1.year << endl;
 return 0;
}