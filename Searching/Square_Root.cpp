#include<iostream>
#include<algorithm>
using namespace std;

float square_root(int n,int p)
{
    int s=0,e=n,mid,i=0;
    float ans=0,inc=0.1;
    while(s<=e)
    {
        mid=(s+e)/2;
        if((mid*mid)==n)
        {
            cout<<"Exact";
            return mid;
        }
        else if((mid*mid)<=n)
        {
            s=mid+1;
            ans=mid;
        }
        else
        {
            e=mid-1;
        }
    }

    while(i<p)
    {
        ans=ans+inc;
        while((ans*ans)<=n)
        {
            ans=ans+inc;
        }   
        ans=ans-inc;
        inc=inc*0.1;
        i++;
    }
    return ans;
}

int main()
{
    int n,p;
    cout<<"Enter Number : ";
    cin>>n;
    cout<<"Enter Precision Part : ";
    cin>>p;
    float root=square_root(n,p);
    cout<<"Square Root : "<<root;

    return 0;
}