#include <iostream>

using namespace std;

int main() 
{
    const int ARRAY_SIZE = 8;
    double averages[ARRAY_SIZE];

    // Input batting averages
    for (int i = 0; i < ARRAY_SIZE; ++i) 
    {
        cout << "Enter a batting average: ";
        cin >> averages[i];
    }

    // Display 
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        cout << "averages[" << i << "] is: " << averages[i] << endl;
    }

    // Find minimum, maximum, and average
    double minAverage = averages[0];
    double maxAverage = averages[0];
    double sum = averages[0];

    for (int i = 1; i < ARRAY_SIZE; ++i) {
        if (averages[i] < minAverage) {
            minAverage = averages[i];
        }

        if (averages[i] > maxAverage) {
            maxAverage = averages[i];
        }

        sum += averages[i];
    }

    double average = sum / ARRAY_SIZE;

    // Display results
    cout << "Minimum batting average is " << minAverage << endl;
    cout << "Maximum batting average is " << maxAverage << endl;
    cout << "Average batting average is " << average << endl;

    return 0;
}