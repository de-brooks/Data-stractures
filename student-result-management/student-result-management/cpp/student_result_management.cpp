#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int SIZE = 5;
    int marks[SIZE];
    int total = 0;
    int highest, lowest;
    double average;

    cout << "STUDENT RESULT MANAGEMENT SYSTEM\n";
    cout << "Enter marks for " << SIZE << " students (0-100).\n\n";

    // Input and validate students' marks
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter mark for student " << i + 1 << ": ";
        cin >> marks[i];

        while (cin.fail() || marks[i] < 0 || marks[i] > 100) {
            cin.clear();
            cin.ignore(10000, '\\n');
            cout << "Invalid input. Enter a whole number from 0 to 100: ";
            cin >> marks[i];
        }
    }

    // Initialize highest and lowest using the first array element
    highest = marks[0];
    lowest = marks[0];

    // Process the array
    for (int i = 0; i < SIZE; i++) {
        total += marks[i];

        if (marks[i] > highest) {
            highest = marks[i];
        }

        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }

    average = static_cast<double>(total) / SIZE;

    // Display individual results
    cout << "\n--- STUDENT RESULTS ---\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Student " << i + 1 << ": " << marks[i] << " - "
             << (marks[i] >= 50 ? "Pass" : "Fail") << '\n';
    }

    // Display summary
    cout << fixed << setprecision(2);
    cout << "\nTotal marks: " << total << '\n';
    cout << "Average mark: " << average << '\n';
    cout << "Highest mark: " << highest << '\n';
    cout << "Lowest mark: " << lowest << '\n';

    return 0;
}
