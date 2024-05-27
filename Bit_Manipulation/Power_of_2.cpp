#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter Number : ";
    cin>>n;

    if((n&(n-1))==0)
    {
        cout<<"Number is Power of 2";
    }
    else
    {
        cout<<"Number is not Power of 2";
    }
    return 0;
}