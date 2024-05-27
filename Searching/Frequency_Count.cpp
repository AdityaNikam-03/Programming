#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int UpperBound(vector<int> arr,int key)
{
	int ans=-1,mid;
	int s=0,e=arr.size()-1;

	while(s<=e)
	{
		mid=(s+e)/2;
		if(arr[mid]==key)
		{
			ans=mid;
			s=mid+1;
		}
		else if(arr[mid]>key)
		{
			e=mid-1;
		}
		else 
		{
			s=mid+1;
		}
	}
	return ans;
}

int LowerBound(vector<int> arr,int key)
{
	int ans=-1,mid;
    int s=0,e=arr.size()-1;
	
	while(s<=e)
	{
		mid=(s+e)/2;
		
		if(arr[mid]==key)
		{
			ans=mid;
			e=mid-1;
		}
		else if(arr[mid]>key)
		{
			e=mid-1;
		}
		else 
		{
			s=mid+1;
		}
	}
	return ans;
}

int Frequency(vector<int> arr,int key)
{
	int s=0,e=arr.size()-1;
	int mid=(s+e)/2;
	int lb=LowerBound(arr,key);
	int ub=UpperBound(arr,key);
	
	return ub-lb+1;
}

int main()
{
	vector<int> arr{0,1,1,1,1,2,2,2,3,4,4,5,5,10};
	int key=3;
	int freq=Frequency(arr,key);
	cout<<"Frequency : "<<freq;
	return 0;	
}