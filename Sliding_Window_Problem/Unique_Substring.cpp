#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

string unique_substring(string str)
{
    int i=0;
    int j=0;
    int win_len=0,max_len=0,win_s=-1;

    unordered_map<char,int> m;

    while(j<str.length())
    {
        char ch = str[j];

        //check if char present in hashmap and its idx >= start of win
        if(m.count(ch) && m[ch]>=i)
        {
            i = m[ch] + 1;
            win_len = j-i;
        }

        //update last occurance
        m[ch] = j;
        win_len++;
        j++;

        //update max window length at every step
        if(win_len>max_len)
        {
            max_len = win_len;
            win_s = i;
        }
    }
    return str.substr(win_s,max_len);
}

int main()
{
    string str;
    cout<<"Enter String : ";
    cin>>str;
    cout<<"Largest Unique Substring : "<<unique_substring(str);
    return 0;
}