#include<iostream.h>
#include<conio.h>

void main()
{
 long long int n;
 int flag=0;
 clrscr();
 cout<<"Day 7";
 cout<<"\nEnter the number : ";
 cin>>n;
 cout<<"\nSize of Number "<<n<<" is : ";
while (n>0) {
  flag++;
  n/=10;
}
cout<<flag;
 getch();

}
