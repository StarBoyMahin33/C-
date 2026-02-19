#include<iostream>;
using namespace std;
int main()
{int year;
 int rem_4;
 int rem_100;
 int rem_400;

 cout<<"Enter year : ";
 cin>>year;
 rem_4= year%4;
  rem_100=year%100;
  rem_400=year%400;
 if(rem_4==0 && rem_100!=0 || rem_400==0){
 cout<<"LEAP YEAR ";
 }
 else{cout<<"NOT LEAP YEAR";}


}
