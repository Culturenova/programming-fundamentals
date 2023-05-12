#include <iostream>

using namespace std;

void displayGrade(int marks);

int main() {
    int marks;

    cout << "Enter your marks (out of 100): ";
    cin >> marks;

    displayGrade(marks);

    return 0;
}

void displayGrade(int marks) {
    if (marks>=91) {
        cout << "Grade: AA" << endl;
    } else if (marks>=81) {
        cout << "Grade: AB" << endl;
    } else if (marks>=71) {
        cout << "Grade: BB" << endl;
    } else if (marks>=61) {
        cout << "Grade: BC" << endl;
    } else if (marks>=51) {
        cout << "Grade: CD" << endl;
    } else if (marks>=41){
        cout << "Grade: DD" << endl;
    } else {
    	cout<<"Grade: Fail" <<endl;
	}
}
