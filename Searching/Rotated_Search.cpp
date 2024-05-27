#include<iostream>
#include<algorithm>
using namespace std;

int Rotated_Search(int a[],int n,int key)
{
    int s=0,e=n-1,mid;
    while(s<=e)
    {
        mid = (s+e)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[s]<=a[mid])
        {
            if(key>=a[s] && key<=a[mid])  
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        else
        {
            if(key>=a[mid] && key<=a[e])
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
    }
    return -1;
}

int main()
{
    int n,key;
    cout<<"Enter Number of Elements : ";
    cin>>n;
    int a[n];
    cout<<"Enter Elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Entered Elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<"Enter Key : ";
    cin>>key;
    int loc=Rotated_Search(a,n,key);
    cout<<"Key is at Location : "<<loc;
    return 0;
}