#include<bits/stdc++.h>

using namespace std;

int main(){
    int a;
    cin>>a;
    long long int ans=1LL;

    for(int i=2;i<=a;i++){
        ans*=(long long int)i;
    }
    cout<<ans<<"\n";
}