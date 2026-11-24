#include <iostream>
#include <string>

using namespace std;

int main() {
    string studentName;
    double marks;
    char grade;

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter exam marks (0 - 100): ";
    cin >> marks;

    // Assign grade using an if-else ladder
    if (marks >= 70 && marks <= 100) {
        grade = 'A';
    } else if (marks >= 60 && marks < 70) {
        grade = 'B';
    } else if (marks >= 50 && marks < 60) {
        grade = 'C';
    } else if (marks >= 40 && marks < 50) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    cout << "\nStudent Name: " << studentName << "\n";
    cout << "Marks       : " << marks << "\n";
    cout << "Grade       : " << grade << "\n";

    return 0;
}