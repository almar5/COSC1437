#include <iostream>
#include <vector>

using namespace std;

bool findElement(const vector<int> &numbers, int target, int index)
{
    if (index >= numbers.size())
    {
        return false;
    }

    if (numbers[index] == target)
    {
        return true;
    }

    return findElement(numbers, target, index + 1);
}

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5};
    int target = 3;

    cout << "Original Vector: ";
    for (int num : numbers)
    {
        cout << num << " ";
    }

    cout << "\nSearching for target: " << target << endl;

    if (findElement(numbers, target, 0))
    {
        cout << "Target found in the vector." << endl;
    }
    else
    {
        cout << "Target not found in the vector." << endl;
    }

    return 0;
}
