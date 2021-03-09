#include <iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    int ans=n*fact(n-1);
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Factorial of n is:"<<fact(n);

    return 0;
}