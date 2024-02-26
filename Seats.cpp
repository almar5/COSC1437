#include <iostream>
#include <vector>
#include <string>

const int rows = 5;  
const int columns = 5;  
using namespace std;

void printChart(const vector<vector<string>>& chart) {
    cout << "  ";
    for (int col = 0; col < columns; ++col) {
        cout << col + 1 << " ";
    }
    cout << "\n";
    
    for (int row = 0; row < rows; ++row) {
        cout << row + 1 << " ";
        for (int col = 0; col < columns; ++col) {
            cout << chart[row][col] << " ";
        }
        cout << "\n";
    }
}

//assign a student to a seat
void assignSeat(vector<vector<string>>& chart, const string& studentName, int row, int col) {
    if (row >= 1 && row <= rows && col >= 1 && col <= columns) {
        if (chart[row - 1][col - 1] == "-") {
            chart[row - 1][col - 1] = studentName;
            cout << studentName << " assigned to seat (" << row << ", " << col << ").\n";
        } else {
            cout << "Seat (" << row << ", " << col << ") is already occupied.\n";
        }
    } else {
        cout << "Invalid row or column.\n";
    }
}

pair<int, int> findEmptySeat(const vector<vector<string>>& chart) {
    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < columns; ++col) {
            if (chart[row][col] == "-") {
                return {row + 1, col + 1};
            }
        }
    }
    return {-1, -1};  // no empty seat
}

// Bonus
int countEmptySeats(const vector<vector<string>>& chart) {
    int count = 0;
    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < columns; ++col) {
            if (chart[row][col] == "-") {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    vector<vector<string>> chart(rows, vector<string>(columns, "-"));
    
    //print first seating chart
    printChart(chart);

    // Assign student
    assignSeat(chart, "Alma", 2, 3);
    
    // print updated seating chart
    printChart(chart);

    // Find an empty seat
    pair<int, int> emptySeat = findEmptySeat(chart);
    if (emptySeat.first != -1) {
        cout << "Found an empty seat at (" << emptySeat.first << ", " << emptySeat.second << ").\n";
    } else {
        cout << "No empty seats available.\n";
    }

    // Bonus
    int emptySeatCount = countEmptySeats(chart);
    cout << "Number of empty seats: " << emptySeatCount << "\n";

    return 0;
}