#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter a number to check if it is Divisible by 5 and 11: ";
	   cin>>num;
	((num%5==0) && (num%11==0)) ? cout<<"\n"<<num<<" is Divisible by 5 and 11" :
      out<<"\n"<<num<<" is Not Divisible by 5 and 11";
    return 0;
}
