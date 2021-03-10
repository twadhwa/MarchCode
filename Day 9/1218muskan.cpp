#include<iostream>
using namespace std;

int main()
{
    int n,r;
    cout<<"enter any number: "; cin>>n;

    int sum=n%10;
    while(n!=0)
    {
       r=n%10;
       n=n/10;
    }
    sum=sum+r;

    cout<<"sum of first and last digits of number is "<<sum;
    return 0;
}
