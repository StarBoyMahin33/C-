#include<iostream>
using namespace std;
void add(int a,int b)
{
    int sum=a+b;
    cout<<"sum:"<<sum<<endl;
}

void sub(int a,int b)
{
    int sub=a-b;
    cout<<"sub:"<<sub<<endl;
}
void mult(int a,int b)
{
    int mult=a*b;
    cout<<"mult:"<<mult<<endl;
}
void division (float a ,float b)
{
    float div=a/b;
    cout<<"div:"<< div<<endl;
}
int main()
{
    float a,b;
    cout<<"enter two integer:";
    cin>>a>>b;
    add(a,b);
    sub(a,b);
    mult(a,b);
    division(a,b);
}
