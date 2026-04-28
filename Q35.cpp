// Develop a class Student that stores student ID, name, and marks of 5 subjects. Calculate and display the total marks, percentage, and grade of the student based on the following criteria:
// Percentage > 90 → O
// 80 < Percentage ≤ 90 → A
// 70 < Percentage ≤ 80 → B
// 60 < Percentage ≤ 70 → C
// 50 < Percentage ≤ 60 → D
// 40 < Percentage ≤ 50 → E
// Else → F

#include <iostream>
using namespace std;

class Student {
    private:
        int id;
        string name;
        float marks[5];
        char marks [30];
    public:

        void getInput() {
            cout << "Enter student ID: ";
            cin >> id;
            cout << "Enter student name: ";
            cin >> name;
            cout << "Enter marks for 5 subjects: ";
            for (int i = 0; i < 5; i++) {
                cin >> marks[i];
            }
        }

        void calculateAndDisplay() {
            float totalMarks = 0;
            for (int i = 0; i < 5; i++) {
                totalMarks += marks[i];
            }
            float percentage = (totalMarks / 500) * 100;

            char grade;
            if (percentage > 90) {
                grade = 'O';
            } else if (percentage > 80) {
                grade = 'A';
            } else if (percentage > 70) {
                grade = 'B';
            } else if (percentage > 60) {
                grade = 'C';
            } else if (percentage > 50) {
                grade = 'D';
            } else if (percentage > 40) {
                grade = 'E';
            } else {
                grade = 'F';
            }

          
            cout <<"\nStudent ID: " << id << endl;
            cout << "Student Name: " << name << endl;
            cout << "Total Marks: " << totalMarks << endl;
            cout << "Percentage: " << percentage << "%" << endl;
            cout << "Grade: " << grade << endl;
        }
};
int main() {
    Student student;
    student.getInput();
    student.calculateAndDisplay();
    return 0;
}   
