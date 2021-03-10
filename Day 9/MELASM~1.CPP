#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
   int n,m;
   int flag=0,first=0,last=0;
   clrscr();
   cout<<"Day 9";
   cout<<"\nEnter the number : ";
   cin>>n;
   m=n;
   last=n%10;
  while (n>0) {
    flag++;
    n/=10;
  }
  first=(m / (int) (pow(10,flag-1)));
  cout << "Sum of first and last digit is " << first+last ;
   getch();
}
