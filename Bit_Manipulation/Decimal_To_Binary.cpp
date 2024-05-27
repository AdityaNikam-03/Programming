#include<iostream>
#include<vector>
using namespace std;

vector<int> DtoB(int n)
{
    vector<int> v;
    int ans;
    while(n > 0)
    {
        ans = n&1;
        v.push_back(ans);
        n = n>>1;
    }
    return v;
}

int main()
{
    int n,i;
    cout<<"Enter Decimal No. : ";
    cin>>n;
    vector<int> v = DtoB(n);

    cout<<"Number in Binary : ";
    for(i = v.size()-1;i>=0;i--)
    {
        cout<<v[i];
    }
    return 0;
}