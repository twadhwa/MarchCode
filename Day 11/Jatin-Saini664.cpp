#include<bits/stdc++.h>

using namespace std;

int GCD(int a, int b){
    return (b!=0)?GCD(b, a%b):a;
}

int main(){
    int a, b;
    cin>>a>>b;
    int gcd=GCD(a, b);
    int lcm = (a*b)/gcd;
    cout<<lcm<<"\n";
}