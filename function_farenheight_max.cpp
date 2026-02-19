#include<iostream>
using namespace std;
int findMax(int num1, int num2,int num3){
int max = num1;
if(num2> max){
    max=num2;
}
  if (num3>max){
    max=num3;

}
return max;
}

double cel_to_faren(double celsius){
double fahrenheit ={(celsius*9/5)+32};
return fahrenheit;
}

int main()
{

    //int num1= 10, num2= 20, num3= 30;
    int max= findMax(1,2,3);
    cout<<"The maximum number is:"<<max<<endl;

    float celsius=20.0;
    float fahrenheit=cel_to_faren(celsius);
    cout<<celsius<<" Celsius is equal to "<< fahrenheit<<" Fahrenheit";
}
