#include <iostream>
#include <math.h>>
using namespace std;
int main()
{
   /* int x;
    x=3*4/2-9+6;
    cout<< "Value of x :"<<x<<endl;
    int a,b,x;
    a=2;
    b=3;
    x=pow(a,2)+2*a*b+pow(b,2);
    cout<<"Value of x :"<<x<<endl;*/
    float a,b,c,x1,x2;
   /* a=2;
    b=3;
    c=5;*/
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Enter c:";
    cin>>c;
    x1=(-b+sqrt(pow(b,2)-4*a*c))/2*a;
    cout<<"x1:"<<x1<<endl;
    x2=(-b-pow((pow(b,2)-4*a*c),1/2.0))/2*a;
    cout<<"x2:"<<x2<<endl;
    return 0 ;

}
