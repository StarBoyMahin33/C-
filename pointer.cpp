
/*#include <iostream>
using namespace std;

int main()
{
   /* int value=6   ;
    int *ptr = &value ;

    if (ptr == nullptr) {
        cout << "Pointer is currently null." << endl;
    }
    else {
        cout << "Pointer is not null." << endl;
        cout << "Value at the memory location [" << ptr << "] is: " << *ptr << endl;
    }

    return 0;
}
int x=5;
int *p;
p=&x;
cout<<x <<endl;
cout<<&x<<endl;
cout<<p<<endl;
cout<<*p<<endl;*/

/*int num1 =10;
int num2=20;
int *p1,*p2;
p1=&num1;
p2=&num2;
int sum= *p1 + *p2;
cout<<sum<<endl;

}*/
#include <iostream>
using namespace std;
int main()
{
int a=30,b=50;
int *p1;
int *p2;
p1=&a;
p2=&b;
cout<<"Before swapping a= "<<*p1<<"b= "<<*p2<<endl;
int temp=*p1;
*p1=*p2;
*p2=temp;
cout<<"After swapping a= "<<*p1<<"b= "<<*p2<<endl;
int sum=*p1+*p2;
int sub=*p2-*p1;
cout<<"SUB ="<<sub<<endl;
cout<<"SUM ="<<sum<<endl;
cout<<"Value of this variable= "<<a<<endl;
cout<<"Address of this variable= "<<&a<<endl;
cout<<"Address of this variable using pointer= "<<p1<<endl;
cout<<"Value of this variable using pointer= "<<*p1<<endl;
}
