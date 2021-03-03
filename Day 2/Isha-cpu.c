#include <stdio.h>
#include <conio.h>
int main()
{
 int a;
 printf("ENTER YOUR NUMBER\n");
 scanf("%d",&a);
 if(a%5==0 && a%11==0)
    printf("%d IS DIVISIBLE BY 5 AND 11 BOTH\n",a);
 else
    printf("%d IS NOT DIVISIBLE BY 5 AND 11 BOTH\n",a);
 return 0;
}
