#include <iostream>
#include<string>
using namespace std;



class Student {
private:
    int id;
    string name;
    int age;
    double cgpa;
    int mark;

public:
   void setvalue(string n, int i, int a, double c, int m){

        id = i;
        name = n;
        age = a;
       cgpa = c;
        mark = m;}
    void getvalue() {
        cout << "Student ID: " << id << endl;
        cout << "Student Name: " << name << endl;
      cout << "Student Age: " << age << endl;
        cout << "Student CGPA: " << cgpa << endl;
        cout << "Student Mark: " << mark << endl;
    }
};

int main()
{ Student student1,student2,student3;
   student1.setvalue( "Mahin", 54544, 20, 3.75, 85);
   student1.getvalue();
   student2.setvalue( "Badhon", 54543, 19, 3.5, 85);
   student2.getvalue();
   student3.setvalue( "Diba", 54545,20, 3.5, 85);
    student3.getvalue();

}
