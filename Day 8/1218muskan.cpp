#include<iostream>
using namespace std;

int main()
{
    int num,prod=1;
    cout<<"enter a number to find its factorial: ";
    cin>>num;

    for(int i=1; i<=num ; i++)
    {
        prod*=i;
    }
    cout<<"factorial of "<<num<<" is: "<<prod;
    return 0;
}
