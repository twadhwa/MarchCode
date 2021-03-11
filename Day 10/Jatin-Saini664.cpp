#include<bits/stdc++.h>

using namespace std;

int hcf(int a, int b){
    return (b!=0)?hcf(b, a%b):a;
}

int main(){
    int a, b;
    cin>>a>>b;
    cout<<hcf(a, b)<<"\n";
}
