#include <iostream>

using namespace std;

int main()
{
 // set prices
 double min = 35.00;
 double add = 4.00;
 double oak = 20.00;
 double goldLeaf = 15.00;

 //declare other variables
 string material;
 string lettering; 
 int numCharacters;

// get input from user
cout << "How many characters are in your sign?";
cin >> numCharacters;

cout << "Are you using oak or pine for your sign?";
cin >> material;

cout << "Are you using black/white or gold-leaf for your lettering?";
cin >> lettering;

//find price
double total = min + ((numCharacters - 5)* add );

if (material == "oak")
{
    total += oak;

}
if (lettering == "gold-leaf")
{
    total += goldLeaf;
}

//display total
cout <<  "The total price of your sign is : $" << total;

return 0;
}