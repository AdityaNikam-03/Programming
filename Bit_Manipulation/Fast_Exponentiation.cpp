#include<iostream>
using namespace std;

int Expo(int n,int pow)
{
    int ans = 1;
    while(pow>0)
    {
        if(pow&1)
        {
            ans = ans*n;
        }
        n = n*n;
        pow = pow>>1;
    }

    return ans;
}

int main()
{
    int n,pow;
    cout<<"Enter Base : ";
    cin>>n;
    cout<<"Enter Power : ";
    cin>>pow;
    cout<<"Answer : "<<Expo(n,pow);
    return 0;
}