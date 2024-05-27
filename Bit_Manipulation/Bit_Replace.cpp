#include<iostream>
using namespace std;

void clearBitInRange(int &n,int i,int j)
{
    int a = (~0)<<(j+1);
    int b = (1<<i) - 1;
    int mask = a|b;
    n = n&mask;
}

void replaceBits(int &n,int i,int j,int m)
{
    clearBitInRange(n,i,j);
    int mask = (m << i);
    n = n|mask;
}

int main()
{
    int n=15,i=1,j=3,m=2;

    replaceBits(n,i,j,m);
    cout<<n;  //5
    return 0;
}