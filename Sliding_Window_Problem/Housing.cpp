#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Housing(int *arr,int n,int k)
{
    int i = 0;
    int j = 0;
    int cs = 0;

    while(j<n)
    {
        //expand window to right
        cs+=arr[j];
        j++;

        //remove elements from left till cs > k and i<j
        while(cs>k && i<j)
        {
            cs = cs - arr[i];
            i++;
        }

        //check at any given point
        if(cs == k)
        {
            //print indexes
            cout<<i<<"-"<<j-1<<endl;
        }
    }
}

int main()
{
    int i,n,k;
    cout<<"Enter Number of Plots : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Plots : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter K : ";
    cin>>k;
    Housing(arr,n,k);
    return 0;
}