#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int> &arr,int s,int e)
{
    vector<int> temp;
    int i=s;
    int mid = (s+e)/2;
    int j = mid+1;
    int cnt = 0;

    while(i<=mid and j<=e)
    {
        if(arr[i]<arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            cnt+=(mid-i+1);
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid)
    {
        temp.push_back(arr[i++]);
    }
    while(j<=e)
    {
        temp.push_back(arr[j++]);
    }

    int k=0,idx;
    for(idx=s;idx<=e;idx++)
    {
        arr[idx] = temp[k++];
    }
    return cnt;
}

int inversion_count(vector<int> &arr,int s,int e)
{
    if(s>=e)
    {
        return 0;
    }    
    int mid = (s+e)/2;
    int c1=inversion_count(arr,s,mid);
    int c2=inversion_count(arr,mid+1,e);
    int CI=merge(arr,s,e);
    return c1+c2+CI;
}

int main()
{
    vector<int> arr;
    int n,i;
    cout<<"Enter Number of Elements : ";
    cin>>n;
    cout<<"Enter Elements : "<<endl;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int s = 0,e = arr.size()-1;
    int ic = inversion_count(arr,s,e);
    cout<<"Total Inversion Count : "<<ic;
    return 0;
}