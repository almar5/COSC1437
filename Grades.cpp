#include <iostream>

using namespace std;

int main() 
{
    // Declare arrays
    const int maxSize = 20;
    string names[maxSize];
    int ages[maxSize];
    char grades[maxSize];

    // Input data
    int numStudents;

    // Prompt the user to enter the number of students (maximum 20)
    cout << "Enter the number of students (maximum 20): ";
    cin >> numStudents;

    // Loop to get student information
    for (int i = 0; i < numStudents; ++i) 
    {
        cout << "Enter information for student " << i + 1 << ":\n";

        // Get student name
        cout << "Name: ";
        cin.ignore(); // To consume the newline character left in the buffer
        getline(cin, names[i]);

        // Get student age 
        do 
        {
            cout << "Age: ";
            cin >> ages[i];

        } 
        while (ages[i] <= 0);

        // Get student grade 
        do 
        {
            cout << "Grade (A, B, C, D, F): ";
            cin >> grades[i];


        } 
        while (!(grades[i] == 'A' || grades[i] == 'B' || grades[i] == 'C' || grades[i] == 'D' || grades[i] == 'F'));
    }

    // Display student information
    cout << "\nStudent Information:\n";
    for (int i = 0; i < numStudents; ++i) 
    {
        cout << "Student " << i + 1 << " - Name: " << names[i] << ", Age: " << ages[i] << ", Grade: " << grades[i] << "\n";
    }

    return 0;
}