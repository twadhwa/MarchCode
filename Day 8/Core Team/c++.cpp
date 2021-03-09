#include <stdio.h>
using namespace std;

void main()
{
	int num,fac=1;
	
	cout << "Enter the number for factorial: ";
	cin >> num;
	while(num>0)
	{
		fac*=num;
		num--;
	}
	cout << "The factorial of the number: " << fac;
	
}