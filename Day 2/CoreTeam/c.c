#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	 clrscr();
	printf("Enter a number: ");
	 scanf("%d", &num);

	if(num%5==0 && num%11==0)
		printf("The number is divisible by both 5 and 11");
	else
		printf("The number is not divisible by 5 and 11");
	getch();
}
