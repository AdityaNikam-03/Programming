#include<iostream>
#include<vector>
using namespace std;

int Partition(vector<int> &arr,int s,int e)
{
    int pivot = arr[e];
    int i = s-1;

    for(int j=s;j<e;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    } 

    swap(arr[i+1],arr[e]);
    return i+1;
}

int Quick_Select(vector<int> &arr,int s,int e,int k)
{
    int partition = Partition(arr,s,e);

    if(partition==k)
    {
        return arr[partition];
    }
    else if(k < partition)
    {
        Quick_Select(arr,s,partition-1,k);
    }
    else
    {
        Quick_Select(arr,partition+1,e,k);
    }
}

int main()
{
    vector<int> arr;
    int i,n,k;
    cout<<"Enter Number of Elements : ";
    cin>>n;
    cout<<"Enter Elements : "<<endl;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<"Enter K : ";
    cin>>k;
    cout<<"Kth Smallest Element : "<<Quick_Select(arr,0,n-1,k-1);

    return 0;
}