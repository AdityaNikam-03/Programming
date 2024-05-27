#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

void min_pair(vector<int> a1,vector<int> a2)
{
    sort(a2.begin(),a2.end());
    
    int p1,p2;
    int diff=INT_MAX;

    for(auto x:a1)
    {
        auto lb=lower_bound(a2.begin(),a2.end(),x)-a2.begin();

        if(lb>=1 && (x-a2[lb-1])<diff)
        {
            diff=x-a2[lb-1];
            p1=x;
            p2=a2[lb-1];
        }

        if(lb!=1 && (a2[lb-1]-x)<diff)
        {
            diff=a2[lb-1]-x;
            p2=x;
            p1=a2[lb-1];
        }
    }

    cout<<"Pair : "<<"["<<p1<<","<<p2<<"]";
}

int main()
{
    vector<int> a1={-1,5,10,20,3};
    vector<int> a2={26,134,135,15,17};

    min_pair(a1,a2);

    return 0;
}