#include<iostream>
using namespace std;

int Fun(int arr[],int target,int low,int high)
{
	int mid=(low+high)/2;
	if(target==arr[mid])
	{
		return mid;
	}
	else if(low==high && target!=arr[mid])
	{
		return 0;
	}
	else if(target>arr[mid])
	{
		low=mid+1;
		Fun(arr,target,low,high);
	}
	else
	{
		high=mid-1;
		Fun(arr,target,low,high);
	}
}

int main()
{
	int n,target,i,low,high,index;
	cout<<"Enter Array Size : ";
	cin>>n;
	int arr[n];
	cout<<"Enter Array Elements : "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}	
	cout<<"Entered Array Elements : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}	
	cout<<endl;
	cout<<"Enter Number to be Search : ";
	cin>>target;
	low=0,high=n-1;
	
	index=Fun(arr,target,low,high);
	
	(index==0)? cout<<"Element Not Found":cout<<index;
}