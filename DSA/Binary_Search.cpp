#include<iostream>
using namespace std;

int main()
{
	int n,target,i,index,mid,low,high,flag;
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
	while(low<=high)
	{
		mid=(low+high)/2;
		if(target==arr[mid])
		{
			index=mid;
			flag=1;  
			break;
		}
		else if(target>arr[mid])
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	
	if(flag==1)
	{
		cout<<"Number Found at index "<<index<<".";
	}
	else
	{
		cout<<"Number not Found..!";
	}	
	return 0;
}