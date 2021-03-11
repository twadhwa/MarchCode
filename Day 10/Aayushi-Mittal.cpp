// To find HCF of two numbers.

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int num1, num2, hcf=1;
  cin>>num1>>num2;
  for( int i=min(num1,num2); i>0; i--)
  { 
    if( num1%i == 0 && num2 % i == 0)
    {
      hcf=i;
      break;
    }
  }
  cout<<"> HCF of "<<num1<<" and "<<num2<<" : "<<hcf;
}
