#include <stdio.h>
#include<conio.h>
int main()
{
	int num,first,last,r,i=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	while(num!=0)
	{
		i++;
		r=num%10;
		if(i==1)
			first=r;
		num=num/10;
	}
	last=r;
	printf("The sum of last and first digits is %d",last+first);
	return 0;
}