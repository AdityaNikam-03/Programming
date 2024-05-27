#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> pairSum(vector<int> v,int sum)
{
    int x,i;
    unordered_set<int> s;
    vector<int> res;

    for(i = 0;i < v.size();i++)
    {
        x = sum-v[i];

        if(s.find(x) != s.end())
        {
            res.push_back(x);
            res.push_back(v[i]);
            return res;
        }

        s.insert(v[i]);
    }
}

int main()
{
    vector<int> v{10,5,2,3,-6,9,11};
    int i,sum=4;

    vector<int> res;
    if(v.size())
    {
        res = pairSum(v,sum);
        cout<<"Pair : "<<"("<<res[0]<<","<<res[1]<<")";
    }
    else
    {
        cout<<"Enter Number First...!";
    }
    return 0;
}