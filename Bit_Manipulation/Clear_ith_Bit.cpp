#include<iostream>
using namespace std;

int Clear(int &n,int i)
{
    int mask = ~(1<<i);
    (n = n&mask);
}

int main()
{
    int n,i;
    cout<<"Enter Number : ";
    cin>>n;
    cout<<"Enter Bit Number to Clear : ";
    cin>>i;
    Clear(n,i);
    cout<<"Value After Clear : ";
    cout<<n;
    return 0;
}