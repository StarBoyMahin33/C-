
#include<iostream>
using namespace std;






void Multiplication_table(int a)
{
    //int a;
   // cout<<"Enter a number:";
    //cin>>a;
    for(int i=0;i<=10;i++){
            int multi;
    multi=a*i;
        cout<<a<<"x"<<i<<"="<<multi<<endl;}

}
void factorial_ofNumber(int a)
{
int factorial=1;
    if(a>0)
    {
        for(int i=1;i<=a;i++){
            factorial*=i;
        }
    }
    else{
        cout<<"wrong Input"<<endl;
    }
      cout<<"Factorial of the number="<<factorial<<endl;

}



int main()
{

    factorial_ofNumber(3);
    Multiplication_table(5);

}
