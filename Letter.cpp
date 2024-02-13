#include <iostream>

using namespace std;

int main ()
{
    //lop through each row
    for (int i = 0; i < 5; ++i)
    {
        // print 3 asterisks for first, third, and fifth row
        if (i==0 || i==2 || i==4)
        {
            for (int j = 0; j < 3; ++j)
            {
                cout << "*";
            }
        }
        else
        {
            //print 1 asterisk for second and fourth row
            cout << "*";
        }
        //space after each asterick
        cout << " ";
        //print newline after each row
        cout << endl;
    }
    return 0;
}