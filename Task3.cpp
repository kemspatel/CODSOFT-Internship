#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> names;
    vector<int> grades;
    string name;
    int grade;
    char choice;

    do {
        cout << "Enter student name: ";
        cin >> name;
        names.push_back(name);

        cout << "Enter " << name << "'s grade: ";
        cin >> grade;
        grades.push_back(grade);

        cout << "Do you want to enter another student? (y/n): ";
        cin >> choice;
    } while (tolower(choice) == 'y');

    // Calculate average grade
    int sum = 0;
    for (int i = 0; i < grades.size(); ++i) {
        sum += grades[i];
    }
    double average = static_cast<double>(sum) / grades.size();

    // Find highest and lowest grades
    int highest = *max_element(grades.begin(), grades.end());
    int lowest = *min_element(grades.begin(), grades.end());

    // Display results
    cout << "\nStudent Grades Summary:" << endl;
    for (int i = 0; i < names.size(); ++i) {
        cout << names[i] << ": " << grades[i] << endl;
    }
    cout << "\nAverage Grade: " << average << endl;
    cout << "Highest Grade: " << highest << endl;
    cout << "Lowest Grade: " << lowest << endl;

    return 0;
}
