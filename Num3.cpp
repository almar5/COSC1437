#include <iostream>

void sum (double a, double b)
{
    std::cout << "Sum: " << a + b << std::endl;
}

void difference (double a, double b)
{
    std::cout << "Difference: " << a - b << std::endl;
}

void product (double a, double b)
{
    std::cout << "Product: " << a * b << std::endl;
}

int main()
{
    double num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    sum(num1, num2);
    difference(num1, num2);
    product(num1, num2);

    return 0;
}