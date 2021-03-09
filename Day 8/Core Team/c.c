#include <stdio.h>
#include<conio.h>
void main()
{
	int num,fac=1;
	printf("Enter the number for factorial: ");
	scanf("%d",&num);
	while(num>0)
	{
		fac*=num;
		num--;
	}
	printf("The factorial of the number: %d",fac);
	
}