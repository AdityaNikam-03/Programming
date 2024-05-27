#include<iostream>
#include<vector>
using namespace std;

int Partition(vector<int> &arr,int low,int high)
{
    int pivot = arr[low];
    int i=low,j=high,temp;
    while(i<j)
    {
        while(arr[i]<=pivot && i<=high)
        {i++;}
        while(arr[j]>pivot && j>=low)
        {j--;}

        if(j<i)
        {
            arr[low]=arr[j];
            arr[j]=pivot;
            return j;
        }
        else 
        {
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}

void Quick_sort(vector<int> &arr,int low,int high)
{
    if(low<high)
    {
        int partition = Partition(arr,low,high);
        Quick_sort(arr,low,partition-1);
        Quick_sort(arr,partition+1,high);
    }
    else
    {
        return;
    }
}

int main()
{
    vector<int> arr;
    int i,n;
    cout<<"Enter Number of Elements : ";
    cin>>n;
    cout<<"Enter Elements : "<<endl;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }

    Quick_sort(arr,0,n-1);

    cout<<"Sorted Array : "<<endl;

    for(auto x:arr)
    {
        cout<<x<<"\t";
    }
    return 0;
}