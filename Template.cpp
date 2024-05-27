#include<iostream>

template<typename T1>
void sort(T1 arr[],int n)
{
	T1 temp;
	int i,j;    //array index are always of integer type
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

int main()
{
	int arr[5]={34,54,78,12,13};
	
	sort<int>(arr,5);
	
	std::cout<<"Sorted Array:"<<std::endl;
	for(int i=0;i<5;i++)
	{
		std::cout<<arr[i]<<std::endl;
	}
	return 0;
}