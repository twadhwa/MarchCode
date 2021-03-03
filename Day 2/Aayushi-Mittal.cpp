// WRITE A PROGRAM TO CHECK WHEATHER A NUMBER IS DIVISBLE BY BOTH 5 & 11

#include<iostream>
using namespace std;
int main()
{
  int num;
  cin>>num;
  (num%5==0 && num%11==0) ? cout<<"YES" : cout<<"NO";
}
