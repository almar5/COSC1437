#include <iostream>

using namespace std;

void reverseArray(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() 
{
    int arr[5];

    cout << "Enter #1: ";
    cin >> arr[0];
    cout << "Enter #2: ";
    cin >> arr[1];
    cout << "Enter #3: ";
    cin >> arr[2];
    cout << "Enter #4: ";
    cin >> arr[3];
    cout << "Enter #5: ";
    cin >> arr[4];

    cout << "Original contents of array: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    reverseArray(arr, 5);

    cout << "Reversed contents of array: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}