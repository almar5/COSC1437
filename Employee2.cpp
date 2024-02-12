#include <iostream>

using namespace std;

int main()
{
    //declare variables
    string name;
    int performanceRating;
    double yearlySalary;
    double bonus;

    //get input from user
    cout << "What is your name?";
    cin >> name;

    cout << "What is your yearly salary?";
    cin >> yearlySalary;

    cout << "What is your performance rating?";
    cin >> performanceRating;

    switch (performanceRating)
    {
        case 1:
        bonus = yearlySalary * 0.25;
        break;

        case 2:
        bonus = yearlySalary * 0.15;
        break;

        case 3:
        bonus = yearlySalary * 0.10;
        break;

        case 4:
        bonus = yearlySalary * 0.00;
        break;
    }

    //display
    cout << name << " your yearly salary is $" << yearlySalary << ", performance rating is " << performanceRating << ", and bonus is $" << bonus << endl;

    return 0;
}