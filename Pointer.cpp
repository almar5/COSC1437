#include <iostream>
using namespace std;

// doubles the value pointed to by a pointer
void doubleValue(int* ptr) {
    *ptr *= 2;
}

int main() {
    int num = 5;

    // initial value of num
    cout << "Initial value of num: " << num << endl;

    // Call the function passing the address of num
    doubleValue(&num);

    //new value of num
    cout << "New value of num after doubling: " << num << endl;

    return 0;
}
