#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
    int num2 = 20;

    // Declaring two pointer variables that point to ints
    int *ptr1, *ptr2;

    // Assign the addresses of num1 and num2 to ptr1 and ptr2
    ptr1 = &num1;
    ptr2 = &num2;

    // Declare a pointer to pointer and assign the address of ptr1 to it
    int **ptr_to_ptr = &ptr1;

    cout << "Value pointed to by ptr1: " << *ptr1 << endl;
    cout << "Value pointed to by ptr_to_ptr: " << **ptr_to_ptr << endl;

    // Change the value of ptr_to_ptr to point to ptr2
    ptr_to_ptr = &ptr2;

    cout << "Value pointed to by ptr_to_ptr: " << **ptr_to_ptr << endl;
    cout << "Value pointed to by *ptr_to_ptr: " << *(*ptr_to_ptr) << endl;

    return 0;
}
