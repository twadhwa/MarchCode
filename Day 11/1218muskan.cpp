#include<iostream>
using namespace std;

int main()
{
    int a,b,maxm;
    cout<<"enter two numbers to find their LCM: ";
    cin>>a>>b;

    maxm=max(a,b);
    for(int i=maxm; i<=a*b; i++)
    {
        if(i%a==0 and i%b==0)
        {
            cout<<"LCM of "<<a<<" and "<<b<<" is: "<<i;
            break;
        }
    }

    return 0;
}

