#include <iostream>
#include <cmath>

using namespace std;

double calculate (double num1, double num2, char op)
{
    switch(op)
    {
        case '+':
        return num1 + num2;

        case '-':
        return num1 - num2;

        case '*':
        return num1 * num2;

        case '/':
        return num1 / num2;

        case '%':
        return fmod(num1, num2);
        
        default:
        return 0.0; 
    }
}

int main()
{
    double num1, num2, result;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator: ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    result = calculate(num1, num2, op);

    cout << "Result: " << num1 << " " << op << " " << num2 << " = " << result << endl;

    return 0;
}