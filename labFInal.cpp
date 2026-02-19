
#include <iostream>
#include <string>
using namespace std;


struct Student {
    string name;
    int rollNumber;
    float marks[2];
};

void displayStudent( Student student) {
    cout << "Name: " << student.name;
    cout<< ", Roll Number: " << student.rollNumber;
    cout << ", Marks: " << student.marks[0] << ", " << student.marks[1]<<endl;
}
void findHighestAndLowest( Student students[], int n) {
    float highest = students[0].marks[0];
    float lowest = students[0].marks[0];

    for (int i = 0; i < n; ++i) {
        float totalMarks = students[i].marks[0] + students[i].marks[1];

        if (totalMarks > highest) {
            highest = totalMarks;}
        if (totalMarks < lowest) {
            lowest = totalMarks;}}
    cout << "Highest Marks: " << highest << endl;
    cout << "Lowest Marks: " << lowest << endl;
}

void sortStudents(Student students[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            float total1 = students[j].marks[0] + students[j].marks[1];
            float total2 = students[j + 1].marks[0] + students[j + 1].marks[1];
            if (total1 > total2) {
                swap(students[j], students[j + 1]);
            }
            else if (total1 == total2 && students[j].name > students[j + 1].name) {
                swap(students[j], students[j + 1]);
            }}}}
    int main()
    {
    int numStudents = 3;
    Student students[numStudents];
    for (int i = 0; i < numStudents; ++i) {
        cout << "Details for Student " << (i + 1) << ":"<<endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Roll Number: ";
        cin >> students[i].rollNumber;
        cout << "Mark 1: ";
        cin >> students[i].marks[0];
        cout << "Mark 2: ";
        cin >> students[i].marks[1];}

    sortStudents(students, numStudents);

    cout << "Student Details (Sorted by Marks):"<<endl;
    for (int i = 0; i < numStudents; ++i) {
        displayStudent(students[i]);
    }
    findHighestAndLowest(students, numStudents);
    return 0;
}
