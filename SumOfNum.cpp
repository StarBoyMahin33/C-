#include<iostream>
using namespace std;
int main ()
{
    int num,sum;
    cout<<"Enter a number :";
    cin>>num;
    for(int i=2; i<=num; i= i+2){
        sum= sum+i;

    }
    cout<<"Sum of number between 1 and "<<num<<" is:"<<sum<<endl;
}
