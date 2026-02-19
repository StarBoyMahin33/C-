#include <iostream>
using namespace std;
int main()
{
  /* for(int i=0; i<=10; i++){
        cout<<"Number:"<<i<<endl;}
}*/
       int num, right_digit;
        cout<<"Enter number:";
        cin>>num;
        while(num!=0){
            right_digit=num % 10;
            cout<<right_digit;
        num= num/10;
       }
       }


