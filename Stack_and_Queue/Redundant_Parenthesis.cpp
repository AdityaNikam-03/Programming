#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isBalanced(string input)
{
    stack<char> s;

    for(char ch:input)
    {
        if(ch!=')')
        {
            s.push(ch);
        }
        else
        {
            bool op=false;
            while(!s.empty() && s.top()!='(')
            {
                char top = s.top();
                if(top=='+' || top=='-' || top=='*' || top=='/')
                {
                    op=true;
                }
                s.pop();
            }
            s.pop();

            if(op==false)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    string input;
    cout<<"Enter String : ";
    cin>>input;
    bool out=isBalanced(input);

    (out==0)? cout<<"Not Redundant":cout<<"Redundant";
    return 0;
}
