#include<iostream>
using namespace std;

int main()
{
   int row=2;
   int col=2;
   int a[row][col];
 for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<"matrix["<<i<<"]["<<j<<"]=";
        cin>>a[i][j];
    }cout<<endl;
   }
   int sum=0;
   int multi=0;
   int minimum= INT_MAX;
   int maximum= INT_MIN;

    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
            if(minimum>a[i][j]){
                minimum=a[i][j];}
                if(maximum<a[i][j]){
                    maximum= a[i][j];}
                    sum+=a[i][j];
                    multi=minimum*maximum;
                }
               // cout<<"Maximum value in "<<i+1<<" is : "<<maximum<<endl;
                //cout<<"Minimum value in "<<i+1<<" is : "<<minimum<<endl;
                  //minimum= INT_MAX;
                  //maximum= INT_MIN;



            }
               cout<<"Maximum value in is : "<<maximum<<endl;
                 cout<<"Minimum value in is : "<<minimum<<endl;


                 cout<<"SUM : "<<sum<<endl;
                  cout<<"Multi : "<<multi<<endl;

   }





