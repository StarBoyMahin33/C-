#include <iostream>
#include <string>

using namespace std;

struct Student {
private:
    int rollNumber;
    float marks;

public:
    string name;
    int age;
    char grade;


    void setRollNumber(int roll) {
        rollNumber = roll;
    }


    int getRollNumber()  {
        return rollNumber;
    }


    void setMarks(float m) {
        marks = m;
        calculateGrade();
    }


    float getMarks()  {
        return marks;
    }


    void calculateGrade() {
        if (marks >= 90) grade = 'A';
        else if (marks >= 80) grade = 'B';
        else if (marks >= 70) grade = 'C';
        else if (marks >= 60) grade = 'D';
        else grade = 'F';
    }
};

int main() {
     int MAX_STUDENTS = 10;
    Student students[MAX_STUDENTS];
    int numberOfStudents;


    cout << "Enter the number of students (up to " << MAX_STUDENTS << "): ";
    cin >> numberOfStudents;


    for (int i = 0; i < numberOfStudents; ++i) {
        cout << "\nEnter details for student " << (i + 1) << ":\n";

        int roll;
        cout << "Roll Number: ";
        cin >> roll;
        students[i].setRollNumber(roll);

        cout << "Name: ";
        cin.ignore();
        getline(cin, students[i].name);

        cout << "Age: ";
        cin >> students[i].age;

        float marks;
        cout << "Marks: ";
        cin >> marks;
        students[i].setMarks(marks);
    }


    cout << "\nStudent Details:\n";
    for (int i = 0; i < numberOfStudents; ++i) {
        cout << "Roll Number: " << students[i].getRollNumber() << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Marks: " << students[i].getMarks() << endl;
        cout << "Grade: " << students[i].grade << endl;
        cout << "-------------------------" << endl;
    }

    return 0;
}
