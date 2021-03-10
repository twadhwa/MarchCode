#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int a;
    cin>>a;
    int ans=a%10;
    a/=10;

    while(a>0){
        int b=a%10;
        a/=10;
        if(a==0)
            ans+=b;
    }

    cout<<ans<<"\n";
}