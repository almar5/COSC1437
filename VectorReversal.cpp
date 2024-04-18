#include <iostream>
#include <vector>

using namespace std;

void reverseVector(vector<int> &numbers, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int temp = numbers[start];
    numbers[start] = numbers[end];
    numbers[end] = temp;

    reverseVector(numbers, start + 1, end - 1);
}

void reverseVector(vector<int> &numbers)
{
    reverseVector(numbers, 0, numbers.size() - 1);
}

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "Original Vector: ";
    for (int num : numbers)
    {
        cout << num << " ";
    }

    reverseVector(numbers);

    cout << "\nReversed Vector: ";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
