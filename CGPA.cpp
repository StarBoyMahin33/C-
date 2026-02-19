#include<iostream>
using namespace std;
int main()
{
    float English_Grade,Math_Grade, Physics_Grade, Programming_Grade,
     English_Credit,Math_Credit, Physics_Credit, Programming_Credit, CGPA, totalCredit, grade;
    cout<<"Enter English Grade:";
    cin>>English_Grade;
     cout<<"Enter English Credit:";
    cin>>English_Credit;
    cout<<"Enter Math Grade:";
    cin>>Math_Grade;
    cout<<"Enter Math Credit:";
    cin>>English_Credit;
     cout<<"Enter Physics Grade:";
    cin>>Physics_Grade;
     cout<<"Enter Physics Credit:";
    cin>>Physics_Credit;
     cout<<"Enter Programming Grade:";
    cin>>Programming_Grade;
     cout<<"Enter Programming Credit:";
    cin>>Programming_Credit;
    totalCredit= English_Credit+Math_Credit+Physics_Credit+Programming_Credit;
    grade= English_Credit*English_Grade+Math_Credit*Math_Grade+Physics_Credit*Physics_Grade+Programming_Credit*Programming_Grade;
    CGPA= grade/totalCredit;
    cout<<"CGPA:"<<CGPA<<endl;
    if(CGPA<=4.00&&CGPA>3.75){
        cout<<"Comment: Good"<<endl;
    }
    else if (CGPA<=3.74&&CGPA>3.50){
            cout<<"Comment: Satisfactory"<<endl;

    }
    else if (CGPA<=3.49&& CGPA>3.00){
        cout<<"Comment: Need to Improve"<<endl;
    }
    else if ( CGPA<=3.00){
        cout<<"Comment: Poor"<<endl;
    }
}





