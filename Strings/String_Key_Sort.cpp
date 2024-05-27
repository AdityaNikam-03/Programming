#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

string extractStringAtKey(string str,int key)
{
    char* s = strtok((char*)str.c_str()," ");

    while(key > 1)
    {
        s = strtok(NULL," ");
        key--;
    }

    return (string)s;
}

int convertToInt(string key)
{
    int ans = 0;
    int p = 1;
    for(int i=key.length()-1;i>=0;i--)
    {
        ans+=((key[i]-'0')*p);
        p=p*10;
    }

    return ans;
}

bool numericCompare(pair<string,string> s1,pair<string,string> s2)
{
    string key1,key2;
    key1 = s1.second;
    key2 = s2.second;

    return convertToInt(key1) < convertToInt(key2);
}

bool lexicoCompare(pair<string,string> s1,pair<string,string> s2)
{
    string key1,key2;
    key1 = s1.second;
    key2 = s2.second;

    return key1 < key2;
}

int main()
{
    int n,i;
    cout<<"Enter Number of Strings : ";
    cin>>n;
    cin.get(); //consume extra \n

    string temp;
    vector<string> v;
    for(i=0 ; i<n ; i++)
    {
        getline(cin,temp);
        v.push_back(temp);
    }

    int key;
    string rev,ordering;
    cout<<"Enter Key,Reversal,Ordering : ";
    cin>>key>>rev>>ordering;

    //1.To extract Keys comparison and store them
    vector<pair<string,string>> vp;
    for(i=0 ; i<n ;i++)
    {
        vp.push_back({v[i],extractStringAtKey(v[i],key)});
    }

    //2.Sorting 
    //(Depend on Ordering either numeric or Lexicographically)

    if(ordering == "numeric")
    {
        sort(vp.begin(),vp.end(),numericCompare);
    }
    else
    {
        sort(vp.begin(),vp.end(),lexicoCompare);
    }

    //3.Reversal
    if(rev=="true") 
    {
        reverse(vp.begin(),vp.end());
    }

    //4.Output
    cout<<" Required Output : "<<endl;
    for(i=0 ; i<n ; i++)
    {
        cout<<vp[i].first<<endl;
    }


    return 0;
}