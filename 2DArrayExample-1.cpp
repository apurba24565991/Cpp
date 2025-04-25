#include<iostream>
using namespace std;
int main()
{
    int arr[3][4]={{2,3,4,7},
                   {5,6,7,15},
                   {8 ,9 ,10 ,12}
                  };

    for (int i=0;i<3;i++)
        {
            for(int j=0;j<4;j++)
            {
                cout<<arr[i][j]<<" ";
            }

            cout<<endl;
        }
        return 0;
}

