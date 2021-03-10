#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int sum=0,a;
    a=n%10;
    sum=sum+a;
    n=n/10;
    while(n!=0){
        if(n<10){
            a=n%10;
            sum=sum+a;
        }
        n=n/10;
    }
    cout<<"Required sum is:"<<sum;
        

    return 0;
}
