#include<iostream>
#include<cstring>
#include<sstream>
#include<vector>
using namespace std;

//Tokenizing a string denotes splitting a string with
//respect to some delimiter(s)

//String Tokenization in C++
//1.Using stringstream class
//2.Using strtok function 

/*int main()
{
    string input;
    cout<<"Enter Any String : ";
    getline(cin,input);
    
    //stringstream class
    stringstream ss(input);
    string token;
    vector<string> tokens;
    while(getline(ss,token,' '))
    {
        tokens.push_back(token);
    }

    for(auto token:tokens)
    {
        cout<<token<<",";
    }
    return 0;
}*/

int main()
{
    char input[1000];
    cout<<"Enter Your String : ";
    cin.getline(input,1000);

    //using strtok function

    //strtok function internally maintains the state of the string you 
    //passed in the last function call
    //By using static variable we can able to maintain state of string passed
    /*cout<<strtok(input," ")<<endl;
    cout<<strtok(NULL," ")<<endl;
    cout<<strtok(NULL," ")<<endl;
    cout<<strtok(NULL," ")<<endl;*/

    return 0;
}