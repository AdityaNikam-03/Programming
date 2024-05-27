#include<iostream>
using namespace std;

void set(int &n,int i)
{
    int mask = (1<<i);
    n = n|mask;
}

int main()
{
    int n,i;
    cout<<"Enter Number : ";
    cin>>n;
    cout<<"Enter Index : ";
    cin>>i;
    set(n,i);
    cout<<"Value after Setting Bit : ";
    cout<<n;

    return 0;
}