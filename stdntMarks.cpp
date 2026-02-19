
#include <iostream>

using namespace std;

class Student{
private:
    string name;
    int cla;
    int roll;
    double marks;
public:
    setInfo(string n, int c, int r, double m){
        name = n;
        cla = c;
        roll = r;
        marks = m;
    }

    void grade(){
        if(marks<50){
            cout << "Grade F" << endl;
            cout << endl;
        }
        else if(marks>=50 && marks<60){
            cout << "Grade D" << endl;
            cout << endl;
        }
        else if(marks>=60 && marks<70){
            cout << "Grade C" << endl;
            cout << endl;
        }
        else if(marks>=70 && marks<80){
            cout << "Grade B" << endl;
            cout << endl;
        }
        else if(marks>=80 && marks<90){
            cout << "Grade A" << endl;
            cout << endl;
        }
        else if(marks>=90 && marks<=100){
            cout << "Grade A+" << endl;
            cout << endl;
        }

    }

    void getInfo(){
        cout << "Student Information: " << endl;
        cout << endl;
        cout<< "Name: " << name << endl;
        cout<< "Class: " << cla << endl;
        cout<< "Roll Number: " << roll << endl;
        cout<< "Marks: " << marks << endl;
    }
};

int main()
{
    string name;
    int cla;
    int roll;
    double marks;

    cout<< "Name: ";
    //cin.ignore();
    getline(cin, name);

    cout<< "Class: ";
    cin >> cla;

    cout<< "Roll Number: ";
    cin >> roll;

    cout<< "Marks: ";
    cin >> marks;

    cout << endl;

    Student s;

    s.setInfo(name, cla, roll, marks);
    s.grade();
    s.getInfo();

    return 0;
}
