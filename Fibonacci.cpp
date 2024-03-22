#include <iostream>

using namespace std;

int fibonacci(int n) 
{
    if (n <= 1)
    return n;
else
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacci(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }
}

int main()
{
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci sequence up to " << n << " terms: ";
    printFibonacci(n);

    return 0;
}