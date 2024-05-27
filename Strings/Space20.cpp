#include<iostream>
#include<cstring>
using namespace std;

void Space20(char* str)
{
    int space = 0,i;
    for(i = 0;str[i] != '\0';i++)
    {
        if(str[i] == ' ')
        {
            space++;
        }
    }

    int idx = strlen(str) + 2*space; 
    str[idx] = '\0';

    for(i = strlen(str) - 1;i > 0;i--)
    {
        if(str[i] == ' ')
        {
            str[idx-1] = '0';
            str[idx-2] = '2';
            str[idx-3] = '%';

            idx = idx - 3;
        }
        else
        {
            str[idx - 1] = str[i];
            idx--;
        }
    }
}

int main()
{
    char str[100];
    cout<<"Enter String : ";
    cin.getline(str,100);
    Space20(str);
    cout<<"String With Spaces Filled with %20 : ";
    cout<<str;
    return 0;
}