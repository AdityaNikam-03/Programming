#include<iostream>
using namespace std;

/*int main()
{
    int n,cnt=0;
    cout<<"Enter Number : ";
    cin>>n;
    while(n>0)
    {
        if(n&1)
        {
            cnt++;
        } 
        n = n>>1;
    }

    cout<<"Number of Set Bits : "<<cnt;
    return 0;
}*/

//or

int main()
{
    int n,cnt=0;
    cout<<"Enter Number : ";
    cin>>n;
    while(n>0)
    {
        n = n&(n-1);
        cnt++;
    }

    cout<<"Number of Set Bits : "<<cnt;
    return 0;
}