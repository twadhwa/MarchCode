#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter any number: ";
    cin>>n;

    int sum=n%10;
    while(n!=0)
    {
       m=n%10;
       n=n/10;
    }
    sum=sum+m;
    cout<<"sum of first and last digits of number is "<<sum;
    return 0;
}
