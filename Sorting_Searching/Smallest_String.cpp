#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

bool compare(string x,string y)
{
    return x+y < y+x;
}

int main()
{
    string arr[]={"a","ab","aba"};
    int n=3;
    sort(arr,arr+n,compare);
    for(auto s:arr)
    {
        cout<<s;
    }
    return 0;
}