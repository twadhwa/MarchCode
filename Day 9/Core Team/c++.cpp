#include <iostream>
using namespace std; 

int main()
{
	int num,first,last,r,i=0;
	cout << "Enter a number: ";
	cin >> num;
	while(num!=0)
	{
		i++;
		r=num%10;
		if(i==1)
			first=r;
		num=num/10;
	}
	last=r;
	cout << "The sum of last and first digits is " << last+first;
	return 0;
}