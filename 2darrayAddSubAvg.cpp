#include<iostream>
using namespace std;

int main()
{
    int matrix1[2][2]; int matrix2[2][2];
    int row=2;int column=2;
    int mult[row][column];
 for(int row=0;row<2;row++){
    for(int column=0;column<2;column++){
        cout<<"matrix1["<<row<<"]["<<column<<"]=";
        cin>>matrix1[row][column];

    }cout<<endl;
   }

    for(int row=0;row<2;row++){
    for(int column=0;column<2;column++){
        cout<<matrix1[row][column]<<" ";

    }cout<<endl;
   }
    for(int row=0;row<2;row++){
    for(int column=0;column<2;column++){

        cout<<"matrix2["<<row<<"]["<<column<<"]=";
        cin>>matrix2[row][column];
    }cout<<endl;
   }
      for(int row=0;row<2;row++){
    for(int column=0;column<2;column++){
        cout<<matrix2[row][column]<<" ";

    }cout<<endl;
   }
      for (int i = 0; i < row; i++) {
        for (int j = 0; j <column; j++) {
            mult[i][j] = 0;
            for (int k = 0; k < column; k++) {
                mult[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Multiplication of given two matrices is: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << mult[i][j] << " ";
        }
        cout << endl;
    }
   int sum[row][column]={{0}};
    int diff[row][column]={{0}};
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            diff[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }cout<<endl;

    cout<< "Matrix Addition:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << sum[i][j] <<" ";
        }
        cout << endl;
    }cout<<endl;

    cout<< "Matrix Subtraction:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << diff[i][j] <<" ";
        }
        cout << endl;
    }

    return 0;
   cout<<endl;

}
