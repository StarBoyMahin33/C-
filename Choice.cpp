#include <iostream>
#include <math.h>
using namespace std;
int main()
{
   /* int number;
    cout<<"Enter a number : ";
    cin>>number;

    /*IF CONDITION*/
   /* if(number<0){
        number=-number;
    }
    cout<<"Absolute value: "<<number<<endl;*/

   /*IF ELSE CONDITION*/
   /* if (number>=0){
        cout<<"You entered a positive number";
       }
        else{
            cout<<"You entered a negative number";

    }*/


    /*Nested if else*/

  /*  if (number>=0){
        if(number%2==0){
            cout<<"you entered a even number";
        }
        else{
            cout<<"You entered a odd number";
        }
    }
    else{
        cout<<"You entered a negative  number"<<endl;
    }*/

   /*class task

    int a,b,c;
    cout<<"Enter the value of a :";
    cin>>a;
    cout<<"Enter the value of b :";
    cin>>b;
    cout<<"Enter the value of c :";
    cin>>c;
    if(a>b&&a>c){
        cout<<" a is the largest "<<endl;
       } if (b>a&&b>c)
            {
                cout<<" b is the largest number"<<endl;}
        else{
            cout<<" c is the largest "<<endl;
        }


       /* int total_classes,attended_classes,percentage;
        cout<<"Enter total number of classes held:";
        cin>>total_classes;
        cout<<"Enter total number of attended classes:";
        cin>>attended_classes;
     percentage=(attended_classes*100/total_classes);
     cout<<"Percentage:"<<percentage<<endl;
    if(percentage>=80)
        {
            cout<<"The student can seat for the exam"<<endl;}
            else{
                cout<<"The student can not seat for the exam"<<endl;
            }


            float value1,value2;
            char op;
            cout<<"Enter an expression:";
            cin>>value1>>op>>value2;
            if(op=='+')
            {
                cout<<"Addition="<<value1+value2<<endl;

            }
            else if(op=='-')
            {
                cout<<"Substraction="<<value1-value2<<endl;
            }
            else if (op=='*')
            {
                cout<<"Multipication="<<value1*value2<<endl;
            }
            else if (op=='/')
            {
                cout<<"Division="<<value1/value2<<endl;

            }
            else if (op='^')
            {
                cout<<"power="<<pow(value1,value2)<<endl;
            }
            else if (op=='%')
            {
                cout<<"Modulus="<<(int)value1%(int)value2<<endl;
            }
            else
            {
                cout<<"Invalid Expression"<<endl;
            }*/
            char choice;
            cout<<"Enter your choice between Y/M/N :";
            cin>>choice;
            switch(choice)
            {
            case'Y':
                cout<<"Yes "<<endl;
                break;
            case 'M':
                cout<<"Maybe"<<endl;
                break;
            case 'N':
                cout<<"No"<<endl;
                break;
            default:
                cout<<"Invalid character"<<endl;
            }

        }









