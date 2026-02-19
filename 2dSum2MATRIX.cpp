#include<iostream>
using namespace std;

int main()
{
int arr[2][2];
int brr[2][2];
int i=0;
int j=0;
  while(i<2){
        j=0;
  while(j<2){
 cin>>arr[i][j];
 cin>>brr[i][j];
 j++;
  }i++;
}
int crr[2][2];
i=0;
while(i<2){
        j=0;
  while(j<2){
        crr[i][j]=arr[i][j]+brr[i][j];
 j++;
  }i++;
}i=0;
while(i<2){
        j=0;
  while(j<2){
        cout<<crr[i][j]<<" ";

 j++;
  }i++;
}cout<<endl;
}


