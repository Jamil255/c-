#include <iostream>

int main() {
    int num1, num2,num3, sum;

    std::cout << "Enter the first number: ";
    std::cin >> num1;


    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Enter the third number: ";
    std::cin >> num3;

    sum = num1 + num2+num3;

    std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << std::endl;

    return 0;}