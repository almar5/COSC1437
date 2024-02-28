#include <iostream>

using namespace std;

//display message
void discount () 
{
    cout << "You are pre-registered and qualify for a 5% discount." << endl;
}

void noDiscount()
{
    cout << "Sorry, you did not pre-register and do not qualify for a 5% discount. " << endl;
}

int main()
{
    char preregistered;
    
    //check if pregistered
    cout << "Did you preregister? Enter Y or N: ";
    cin >> preregistered;

    if (preregistered == 'Y' || preregistered == 'y')
    {
        discount();        
    }
    else
    {
        noDiscount();
    }

    return 0;
}