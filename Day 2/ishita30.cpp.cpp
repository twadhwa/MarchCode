#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if((n%5==0) && (n%11==0))
    {
        cout<<"Number is divisible by both 5 and 11";
    }
    else
    {
        cout<<"Number is not divisible by both 5 and 11";
    }

    
}
