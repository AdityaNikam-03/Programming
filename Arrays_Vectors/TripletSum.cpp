#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int> &arr)
{
    int i,j;
    for(i=0;i<arr.size()-1;i++)
    {
        for(j=i+1;j<arr.size();j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

vector<vector<int>> TripletSum(vector<int> arr,int sum)
{
    int i,j,k;
    int n=arr.size();
    vector<vector<int>> result;

    for(i=0;i<n-3;i++)
    {
        j=i+1;
        k=n-1;

        while(j<k)
        {
            int c_s=arr[i]+arr[j]+arr[k];

            if(c_s==sum)
            {
                result.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
            }
            else if(c_s>sum)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }

    return result;
}

int main()
{
    vector<int> arr{1,2,3,4,5,6,7,8,9,15};
    int sum=18,i,j;
    sort(arr);

    vector<vector<int>> res=TripletSum(arr,sum);

    for(i=0;i<res.size();i++)
    {
        cout<<"[";
        for(j=0;j<3;j++)
        {
            cout<<res[i][j];
            (j==2?cout<<"":cout<<",");
        }
        cout<<"]"<<endl;
    }
    return 0;
}