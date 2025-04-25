#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;
    if(number<0)
    {
        cout<<"The number is Negative"<<endl;
    }
    else if(number>0)
    {
        cout<<"The number is Positive"<<endl;
    }
    else
    {
        cout<<"The number is Zero"<<endl;
    }
return 0;
}

