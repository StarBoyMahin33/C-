
#include<iostream>
using namespace std;

int main()
{
    float matrix[2][2];
    int row=2;int column=2;


 for(int row=0;row<2;row++){
    for(int column=0;column<2;column++){
        cout<<"matrix["<<row<<"]["<<column<<"]=";
        cin>>matrix[row][column];

    }cout<<endl;
}
for(int row=0;row<2;row++){
    for(int column=0;column<2;column++){
        cout<<matrix[row][column]<<" ";

    }cout<<endl;}


 float sum=0;
   for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            sum+=matrix[i][j];}}
    float avg=sum/(row*column);
    cout<<"Number of rows: "<<row<<endl;
    cout<<"Number of columns: "<<column<<endl;
    cout<<"Sum of numbers: "<<sum<<endl;
    cout<<"Average of numbers: "<<avg<<endl;


}
