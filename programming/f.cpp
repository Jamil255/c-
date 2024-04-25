#include <iostream>
using namespace std;
struct person
{
    char name[50];
    float salary;
    int age;
};
void displayData(person);
person getData(person);

int main()
{
    person p1, temp;
    temp = getData(p1);
    p1 = temp;
    displayData(p1);
    return 0;
}
person getData(person p1)
{
    cout << "enter  full name:" << endl;
    cin.get(p1.name, 50);
    cout << "enter your age:" << endl;
    cin >> p1.age;
    cout << "enter your salary:" << endl;
    cin >> p1.salary;
    // displayData(p1);
    return p1;
}
void displayData(person p1)
{
    cout << "display information." << endl;
    cout << "name:" << p1.name << endl;
    cout << "age:" << p1.age << endl;
    cout << "salary:" << p1.salary << endl;
    // return 0;
}