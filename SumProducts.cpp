#include <iostream>

int sums (int n)
{
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += i;
    }
    return sum;
}

int products(int n)
{
    int product = 1;
    for (int i = 1; i <= n; ++i )
    {
        product *= i;
    }
    return product;
}


int main()
{
    int num;
    do
    {
        std::cout << "Enter an integer (0 to exit): ";
        std::cin >> num;
        if (num != 0)
        {
            std::cout << "Sum of numbers up to " << num << ": " << sums(num) << std::endl;
            std::cout << "Product of numbers up to " << num << ": " << products(num) << std::endl;
        }
    }
    while (num != 0);

    return 0;
}
