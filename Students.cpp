#include <iostream>

using namespace std;

int main()
{
    char input;
    int leftHanded = 0;
    int rightHanded = 0;

    while (true)
    {
        cout << "Enter an L if you are left-handed, an R if you are right-handed or X to quit: ";
        cin >> input;

        if (input == 'X')
        {
            break;
        }
        else if (input == 'L')
        {
            leftHanded++;
        }
        else
        {
            rightHanded++;
        }
    }

    cout << "Number of left-handed students: " << leftHanded << endl;
    cout << "Number of right-handed students: " << rightHanded << endl;
}