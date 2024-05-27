#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    
    (n&1)? cout<<"Odd Number":cout<<"Even Number";

    return 0;
}