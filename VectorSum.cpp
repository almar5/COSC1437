#include <iostream>
#include <vector>

using namespace std; 

int vectorSum(const vector<int> & numbers)
{
    if (numbers.empty())
    {
        return 0;
    }
    else
    {
        return numbers.back() + vectorSum(vector<int>(numbers.begin(),numbers.end() - 1));
    }
}

int main()
{
    vector<int> myVector = {1,2,3,4,5};
    int sum = vectorSum(myVector);
    cout << "Sum of the vector elements: " << sum << endl;

    return 0;
}