#include<iostream>
using namespace std;

int get(int n,int i)
{
    int mask = (1<<i);
    return (n&mask)>0?1:0;
}

int main()
{
    int n,i;
    cout<<"Enter Number : ";
    cin>>n;
    cout<<"Enter Bit Number to get : ";
    cin>>i;
    cout<<get(n,i);
    return 0;
}