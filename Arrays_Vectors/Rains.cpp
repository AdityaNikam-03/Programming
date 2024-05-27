#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Rain(vector<int> arr)
{
    int i,water=0,n = arr.size(),max = arr[0];

    vector<int> L(n,0),R(n,0);

    L[0] = arr[0];
    R[n-1] = arr[n-1];

    if(n <= 0)
    {
        return 0;
    } 

    for(i = 1; i < n ; i++)
    {
        (L[i-1] > arr[i] ? L[i] = L[i-1] : L[i] = arr[i]);
        (R[n-i] > arr[n-i-1] ? R[n-i-1] = R[n-i] : R[n-i-1] = arr[n-i-1]);
    }

    for(i = 0; i < n ; i++)
    {
        int min;
        (L[i] > R[i] ? min = R[i] : min = L[i]); 
        water += min - arr[i];
    }
    return water;
}

int main()
{
    vector<int> arr{0,1,0,2,1,0,1,3,2,1,2,1};
    int litre = Rain(arr);
    cout<<"Litres of Water Stored : "<<litre;
    return 0;
}