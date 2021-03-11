#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    int max = (a>b)?a:b;
    int temp=0;
    for(int i=1; i<=max;i++)
    {
        if ((a%i==0) && (b%i==0))
        {
            temp = i;
        }
    }
    cout<<"HCF = "<<temp;
    return 0;
}