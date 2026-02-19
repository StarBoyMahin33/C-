#include <iostream>
using namespace std;
int main()
{
    float cgpa[3];
    for(int i=0; i<3;i++)
{
    cout<<"ENTER THE cgpa of student " << i+1<<" =";
 cin>>cgpa[i];
}
cout<<cgpa[0]<<endl;
cout<<cgpa[1]<<endl;
cout<<cgpa[2]<<endl;

if (cgpa[0]<cgpa[2]&& cgpa[0]<cgpa[1])
{
    cout<<"Smallest cgpa="<<cgpa[0];
}

else if (cgpa[1]<cgpa[0] && cgpa[1]<cgpa[2])
{
    cout<<"Smallest cgpa="<<cgpa[1];

}
else if(cgpa[2]<cgpa[1] && cgpa[2]<cgpa[0])
    {
         cout<<"Smallest cgpa="<<cgpa[2];
    }
}
