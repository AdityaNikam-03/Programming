#include<iostream>
#include<vector>
using namespace std;

int Highest_Mountain(vector<int> a)
{
    int n = a.size();
    int i,j,largest = 0,cnt = 0;

    for(i=1;i<n-1;i++)
    {
        if(a[i] > a[i-1] && a[i] > a[i+1])
        {
            cnt=1;
            j=i;

            while(j >= 1 && a[j] > a[j-1])
            {
                j--;
                cnt++;
            }
            while(i < n-1 && a[i] > a[i+1])
            {
                i++;
                cnt++;
            }
            (cnt>largest ? largest=cnt : largest=largest);
        }
    }
    return largest;
}

int main()
{
    vector<int> arr{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
    int out = Highest_Mountain(arr);

    cout<<"Mountain : "<<out;
    return 0;
}