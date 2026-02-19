#include<iostream>
using namespace std;

void swapV(int a, int b){ //pass by Value
    cout<<"Before a: "<<a<<endl;
    cout<<"Before b: "<<b<<endl;
    cout<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<"Inside swapV function"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
}
void swapR(int *x, int *y){ //pass by Reference
    cout<<"Before x: "<<*x<<endl;
    cout<<"Before y: "<<*y<<endl;
    cout<<endl;
    int temp=*x;
    *x=*y;
    *y=temp;
    cout<<"Inside swapR function"<<endl;
    cout<<*x<<endl;
    cout<<*y<<endl;
}

int main(){
    int a=10,b=20;
    int x=100,y=200; //*ax==x x=100 *ax=100

    swapV(a,b);
    cout<<"Inside main function"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<endl;

    swapR(&x,&y);
    cout<<"Inside main function"<<endl;
    cout<<x<<endl;
    cout<<y<<endl;

    return 0;
}
