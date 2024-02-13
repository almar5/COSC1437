#include <iostream>

using namespace std;

int main()
{
    //setting variables
    int rating;
    int totalRating = 0;
    int count = 0;

    //make while loop
    while (true)
    {
        cout << "Enter rating for top song: ";
        cin >> rating;

        if (rating >= 0 && rating <= 4)
        {
            totalRating += rating;
            count++;
        }
        
        else
        {
          break;  
        }
    }

    
    double averageRating = static_cast<double>(totalRating) / count;

    cout << "Average Star Value: " << averageRating << endl;

    return 0;
}