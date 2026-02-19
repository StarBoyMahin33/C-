#include <iostream>
#include <string>

using namespace std;

class Student{
private:
    string name;
    string id;
    double cgpa;
public:
    void setStudent(string n, string i, double c){
        name = n;
        id = i;
        cgpa = c;
    }
    void getStudent(){
        cout << "Name: " << name << endl;
        cout << "ID: "  << id << endl;
        cout << "CGPA: "  << cgpa << endl;
        cout << endl;
    }
    double CGPA(){
        return cgpa;
    }
};

int main()
{
    string n;
    string b;
    double c;
    int x;

    cout << "Enter Number of Students: ";
    cin >> x;
    cout << endl;
    Student s[x];

    for(int i = 0; i < x; i++){
        cout << "Student Number " << i+1 << " Information" << endl;
        cout << "Enter Name : ";
        cin>>n;

        //cin.ignore();
        //getline(cin, n);
        cout << "Enter Id : ";
        //cin.ignore();
        getline(cin, b);
        cout << "Enter CGPA : ";
        cin >> c;
        cout << endl;
        s[i].setStudent(n, b, c);
    }

    double maxi=INT_MIN;

    for(int i = 0; i < x; i++){
        if(maxi < s[i].CGPA()){
            maxi = s[i].CGPA();
        }
    }

    for(int i = 0; i < x; i++){
        if(maxi == s[i].CGPA()){
            cout << "Student with Maximum CGPA: Student Number " << i+1 << endl;
            s[i].getStudent();
        }
    }

    return 0;
}
