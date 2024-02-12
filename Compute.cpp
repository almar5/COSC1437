#include <iostream>

using namespace std;

int main ()
{
    //set prices
    int num1 = -50;
    int num2 = 53;
    int num3 = 78;

    //find smallest
    if (num1 < num2 && num1 < num3)
    {
        cout << "The smallest number is: " << num1 << endl;
    } 
    else if (num2 < num1 && num2 < num3)
    {
        cout << "The smallest number is: " << num2 << endl;
    }
    else 
    {
        cout << "The smallest number is: " << num3 << endl;
    }

    //find largest
    if (num1 > num2 && num1 > num3)
    {
        cout << "The largest number is: " << num1 << endl;
    } 
    else if (num2 > num1 && num2 > num3)
    {
        cout << "The largest number is: " << num2 << endl;
    }
    else 
    {
        cout << "The largest number is: " << num3 << endl;
    }

    return 0;
}