// To find factorial of a given number.

#include<iostream>
using namespace std;
int main()
{
  long fact=1;
  int num;
  cin>>num;
  for( int i=2; i<=num; i++)
    fact*=i;
  cout<<num<<"! = "<<fact;
  return 0;
}
