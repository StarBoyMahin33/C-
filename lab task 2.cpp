#include<iostream>
using namespace std;

struct student
{
    string name;
    int roll_no;
    int marks[5] ;


    };

   int main()
   {
       student s1;
       int sum;


    cout << " Name: " << s1.name ;
    cin>>s1.name;
    cout << "Roll No: " << s1.roll_no ;
    cin>>s1.roll_no;
       cout<<"enter marks of 5 subjects : "<<endl;



  for(int i=0; i<5;i++){
        cin>>s1.marks[i];
        sum += s1.marks[i];};
cout<<"TOTAL MARKS : " ;
        cout<<sum<<endl;




  cout<<"Avarage Marks:";
  cout<< sum/5<<endl;


  cout<<"STUDENT 2"<<endl;
   student s2;
       int sum2;


    cout << " Name: " << s2.name ;
    cin>>s2.name;
    cout << "Roll No: " << s2.roll_no ;
    cin>>s2.roll_no;
       cout<<"enter marks of 5 subjects : "<<endl;



  for(int i=0; i<5;i++){
        cin>>s2.marks[i];
        sum += s2.marks[i];};
cout<<"TOTAL MARKS : " ;
        cout<<sum<<endl;




  cout<<"Avarage Marks:";
  cout<< sum/5<<endl;

   cout<<"STUDENT 3"<<endl;
   student s3;
       int sum3;


    cout << " Name: " << s3.name ;
    cin>>s3.name;
    cout << "Roll No: " << s3.roll_no ;
    cin>>s3.roll_no;
       cout<<"enter marks of 5 subjects : "<<endl;



  for(int i=0; i<5;i++){
        cin>>s3.marks[i];
        sum += s3.marks[i];};
cout<<"TOTAL MARKS : " ;
        cout<<sum<<endl;




  cout<<"Avarage Marks:";
  cout<< sum/5<<endl;


}




