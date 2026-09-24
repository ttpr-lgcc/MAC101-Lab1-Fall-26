// Stretch goal attempted
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string name;
    double gpa;

    cout << "What is your name?" << endl;
    getline(cin, name);

    cout << "Hello " << name << " nice to meet you" << endl;

    cout << "What is your GPA?" << endl;
    cin >> gpa;

    cout << fixed << setprecision(1);
    cout << "Wow " << name << " Your GPA is " << gpa << " Get ya grades up!" << endl;

    return 0;
}
