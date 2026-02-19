#include<iostream>
using namespace std;
int main ()
{
    int purchase[7];
    int total=0;
    for(int i=0;i<7;i++){
     cout<<"Enter purchase ammount  "<<i+1<<": ";
     cin>>purchase[i];}
     for(int i=0;i<7;i++){
     if(purchase[i]%2==0){
        cout<<"Even number"<<endl;
            total=total+purchase[i];

     }
     else{cout<<"Odd number"<<endl;}
    }
    cout<<"Total="<<total;

}
