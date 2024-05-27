#include<iostream>
using namespace std;

void Clear_Last_Bits(int &n,int i)
{
    int mask = (~0 << i);
    n = n&mask;
}

int main()
{
    int n,i;
    cout<<"Enter Number : ";
    cin>>n;
    cout<<"Enter Last Bits to Clear : ";
    cin>>i;
    Clear_Last_Bits(n,2);
    cout<<"Number After Clearing Last Bits : "<<n;
    return 0;
}