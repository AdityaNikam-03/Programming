#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int s,int e)
{
    vector<int> temp;
    int i=s;
    int mid = (s+e)/2;
    int j = mid+1;

    while(i<=mid and j<=e)
    {
        if(arr[i]<arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
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
    return;
}

void merge_sort(vector<int> &arr,int s,int e)
{
    if(s>=e)
    {
        return;
    }    
    int mid = (s+e)/2;
    merge_sort(arr,s,mid);
    merge_sort(arr,mid+1,e);
    return merge(arr,s,e);
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
    merge_sort(arr,s,e);
    cout<<"Sorted Array : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}