#include<iostream>
#include<cstring>
using namespace std;

char* mystrtok(char* str,char delim)
{
    int i;
    static char* input;
    if(str != NULL)
    {
        input = str;
    }

    if(input == NULL)
    {
        return NULL;
    } 

    static char* token = new char[strlen(str) + 1];

    for(i = 0;input[i] != '\0';i++)
    {
        if(input[i] != delim)
        {
            token[i] = input[i];
        }
        else
        {
            token[i] = '\0';
            input = input + i +1;
            return token;
        }
    }

    token[i] = '\0';
    input = NULL;
    return token;
}

int main()
{
    char str[1000];
    cout<<"Enter Your String : ";
    cin.getline(str,1000);

    char* token = mystrtok(str,' ');

    while(token != NULL)
    {
        cout<<token<<endl;
        token = mystrtok(NULL,' ');
    }
    return 0;
}