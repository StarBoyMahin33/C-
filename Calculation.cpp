#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,sum1,sum2,sum;
    /*cout<<"Enter 1st value:";
    cin>>a;
    cout<<"Enter 2nd value:";
    cin>>b;*/
    a=30;
    b=10;
    sum1=a*b;
    sum2=a-b;
    sum=a+b;
    //binary operator

    cout<<"Multipication :"<<sum1<<endl;
    cout<<"Subtraction:"<<sum2<<endl;
    cout<<"Addition:"<<sum<<endl;
    cout<<"Integer Division:"<<10/3<<endl;
    cout<<"Real Division:"<<10.0/3<<endl;
    cout<<"Real Division:"<<10/3.0<<endl;
    cout<<"Real Division:"<<10.0/3.0<<endl;
    cout<<"Modulus :"<<10%3<<endl;
    cout<<"Modulus :"<<3%10<<endl;
    //unary operator

    sum=-sum;
    cout<<"Sign Change:"<<sum<<endl;
    cout<<"Square Calculation:"<<pow(5,2)<<endl;
    cout<<"Square Calculation:"<<pow(5,3)<<endl;
    cout<<"Square Root Calculation:"<<pow(25,1/2.0)<<endl;

    return 0;

}
