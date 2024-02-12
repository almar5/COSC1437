#include <iostream>

using namespace std;

int main()
{
    //declare variables
    string name;
    int bonus;
    int transactionsDollar;
    int numTransactions;
    int numShifts;

    //get input from user
    cout << "What is your name?";
    cin >> name;

    cout << "What is your transations dollar value?";
    cin >> transactionsDollar;

    cout << "What is your number of transactions?";
    cin >> numTransactions;

    cout << "What is the number of shifts you have worked?";
    cin >> numShifts;

    //calculate productivity score
    int productivityScore = ((transactionsDollar/numTransactions)/numShifts);

    //find bonus
    if (productivityScore <= 30)
    {
        bonus = 50; 
    }
    else if (productivityScore >= 31 && productivityScore <= 69)
    {
        bonus = 75;
    }
    else if (productivityScore >= 70 && productivityScore <= 199)
    {
        bonus = 100;
    }
    else
    {
        bonus = 200;
    }

    //display name and bonus
    cout << name << " your bonus is : $" << bonus << endl;;

    return 0;
}