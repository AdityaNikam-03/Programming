#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int LargestBand(vector<int> arr)
{
    int n = arr.size(),next_no,cnt;
    unordered_set<int> s;
    int largestLen = 1;
    for(int x : arr)
    {
        s.insert(x);
    }

    for(auto element : s)
    {
        int parent = element - 1; //ignore if parent is present

        if(s.find(parent)==s.end()) //parent not exist so find band
        {
            //logic to find band
            next_no = element + 1;
            cnt = 1;

            while(s.find(next_no) != s.end())
            {
                next_no++;
                cnt++;
            } 
            if(cnt > largestLen)
            {
                largestLen = cnt;
            }
        }
    }

    return largestLen;
}

int main()
{
    vector<int> arr{1,9,3,0,18,5,2,4,10,7,12,6};
    int LargeBand = LargestBand(arr);
    cout<<"Length of Largest Band : "<<LargeBand;
    return 0;
}