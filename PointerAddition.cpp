#include<iostream>
using namespace std;
int main()
{
    int num1=10,num2=18,sum3;
    int *pntr1,*pntr2;
    pntr1=&num1;
    pntr2=&num2;

    sum3=*pntr1+*pntr2;

    cout<<sum3<<endl;
return 0;
}

