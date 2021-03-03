#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    if(a % 5 == 0 and a % 11 == 0)
    {
        cout<<a<<" is divisible by both 5 and 11 ";
    }
    else
    {
        cout<<a<<" is not divisible by both 5 and 11 ";
    }
    return 0;
}