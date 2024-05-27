#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool canPlaceBirds(int arr[],int B,int n,int mid)
{
    int birds=1;
    int location=arr[0];
    for(int i=1;i<n;i++)
    {
        if((arr[i]-location)>=mid)
        {
            location=arr[i];
            birds++;
        }

        if(birds==B)
        {
            return true;
        }
    }

    return false;
}

int Angry_Bird(int arr[],int n,int B)
{
    int s=0,e=arr[n-1]-arr[0],mid,ans=-1;
    bool canPlace;

    while(s<=e)
    {   
        mid=(s+e)/2;
        canPlace=canPlaceBirds(arr,B,n,mid);
        if(canPlace)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return mid;
}

int main()
{
    int n=5;
    int arr[]={1,2,4,8,9};
    int B=3;
    int out=Angry_Bird(arr,n,B);
    cout<<"Largest Minimum Distance : "<<out;
    return 0;
}