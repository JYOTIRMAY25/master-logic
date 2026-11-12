// Take two numbers and check if both are positive and their sum is less than 100. 

#include <iostream>

int main() {

    int a, b;

    std::cout << "Enter the first number: ";
    std::cin >> a;

    std::cout << "Enter the second number: ";
    std::cin >> b;

    if (a > 0 && b > 0 && (a + b) <= 100)
    {
        std::cout << "Both numbers are positive and their sum is less than 100" << std::endl;
    }
    else
    {
        std::cout << "Condition not satisfied" << std::endl;
    }

    return 0;
}