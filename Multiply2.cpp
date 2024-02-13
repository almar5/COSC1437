#include <iostream>

using namespace std;

int main()
{
    cout << "0 through 10 multiplied by 2 and 10." << endl;

    int i = 0;

    while (i <= 10)
    {
        cout << "Number: " << i << endl;
        cout << "Multiplied by 2: " << i * 2 << endl;
        cout << "Multiplied by 10: " << i * 10 << endl;

        ++i;
    }

    return 0;
}