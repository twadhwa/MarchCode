// To find sum of the first and last digit of a given number.

#include<iostream>
using namespace std;
int main()
{
  long num;
  int first, last;
  last = num % 10;
  for( int n = num; n != 0; n /= 10 )
    first = n % 10;
  cout << "> Sum of first and last digit : " << first + last;
  return 0;
}
