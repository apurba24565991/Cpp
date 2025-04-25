#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    cout<<"Enter 6 numbers: "<<endl;

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {

             cin>>arr[i][j];

        }
    }
    cout<<"The numbers are:"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {

            cout<<"numbers ["<<i<<"]"<<"["<<j<<"] = "<<arr[i][j]<<endl;
        }
    }
    return 0;
    }
