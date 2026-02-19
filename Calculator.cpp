#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    char op;
    float num1,num2;
    cout<<"Enter your expression: ";
    cin>>num1>>op>>num2;
    switch (op)
    {
    case '+':
        cout<<"Addition:"<<num1+num2<<endl;

        break;
    case'-':
         cout<<"Substraction:"<<num1-num2<<endl;
         break;
    case'*':
         cout<<"Multipication:"<<num1*num2<<endl;
         break;
    case'/':
         cout<<"Division:"<<num1/num2<<endl;
         break;
    case'^':
         cout<<"Power:"<<pow(num1,num2)<<endl;
          break;
    case'%':
         cout<<"Modulus:"<<(int)num1%(int)num2<<endl;
         break;
    default:
         cout<<"Result: Invalid"<<endl;
         break;
    }
}
