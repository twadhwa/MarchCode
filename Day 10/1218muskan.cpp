#include<iostream>
using namespace std;

int main()
{
    int a,b,minm;
    cout<<"enter two numbers to find their HCF: ";
    cin>>a>>b;

    minm=min(a,b);
    for(int i=minm; i>0; i--)
    {
        if(a%i==0 and b%i==0)
        {
            cout<<"HCF of "<<a<<" and "<<b<<" is: "<<i;
            break;
        }
    }

    return 0;
}
