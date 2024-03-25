#include <iostream>
#include <vector>
using namespace std;


int binarySearchRecursive(const vector<int>& arr, int target, int left, int right) 
    {
    if (left > right) 
    {
        return -1; 
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) 
    {
        return mid; 
    } 
    else if (arr[mid] > target) 
    {
        return binarySearchRecursive(arr, target, left, mid - 1); 
    } 
    else 
    {
        return binarySearchRecursive(arr, target, mid + 1, right); 
    }
}


int binarySearch(const vector<int>& arr, int target) {
    return binarySearchRecursive(arr, target, 0, arr.size() - 1);
}

int main() 
{
    vector<int> sortedArray = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int target = 12;

    int index = binarySearch(sortedArray, target);

    if (index != -1) 
    {
        cout << "Element " << target << " found at index " << index << endl;
    } 
    else 
    {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}