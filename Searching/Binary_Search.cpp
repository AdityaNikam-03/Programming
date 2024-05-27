#include<iostream>
#include<vector>
using namespace std;

int B_Search(vector<int> v,int key)
{
    int low=0,high=v.size()-1,mid;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(v[mid]==key)
        {
            return mid;
        }
        else if(v[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;

        }
    }

    return 0;
}

int main()
{
    vector<int> v;
    int key,index,n;
    cout<<"Enter Number of Elements : ";
    cin>>n;
    cout<<"Enter Elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<"Enter Key : ";
    cin>>key;

    if(index=B_Search(v,key))
    {
       cout<<"Found at index : "<<index; 
    }
    else
    {
        cout<<"Not Found";
    }
    return 0;
}