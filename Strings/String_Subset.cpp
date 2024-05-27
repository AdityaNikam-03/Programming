#include<iostream>
#include<cstring>
using namespace std;

bool Subset(string s1,string s2)
{
    int i = s1.length() - 1,j = s2.length() - 1;

    while(j>=0 && i>=0)
    {
        if(s2[j] == s1[i])
        {
            i--;
            j--;
        }
        else
        {
            i--;
        }
    }

    if(j == -1)
    {
        return true;
    }
    return false;


}

int main()
{
    string s1,s2;
    cout<<"Enter Your String : ";
    getline(cin,s1);
    cout<<"Enter String for check Subset : ";
    getline(cin,s2);

    if(Subset(s1,s2))
    {
        cout<<"Subset......!";
    }
    else
    {
        cout<<"Not Subset..!";
    }

    return 0;
}