#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isBalanced(string input)
{
    stack<char> s;

    for(auto x:input)
    {
        switch(x)
        {
            case '(':
            case '{':
            case '[':s.push(x);
                    break;
            case ')':if(!s.empty() && s.top()=='(')
                        s.pop();
                    else
                        return false;
                    break;
            case '}':if(!s.empty() && s.top()=='{')
                        s.pop();
                    else
                        return false;
                    break;
            case ']':if(!s.empty() && s.top()=='[')
                        s.pop();
                    else
                        return false;
                    break;
        }
    }
    if(s.empty())
        return true;
    else
        return false;
}

int main()
{
    string input;
    cout<<"Enter String : ";
    cin>>input;
    bool out=isBalanced(input);

    (out==1)? cout<<"Balanced":cout<<"Not Balanced";
    return 0;
}
