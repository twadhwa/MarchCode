#include <stdio.h>
int main()
{
    int A;
   
    printf("Enter any number: ");
    scanf("%d", &A);
    
    if((A%5==0) && (A%11== 0) )
    {
        printf("Number is divisible by 5 and 11");
    }
    else
    {
        printf("Number is not divisible by 5 and 11");
    }
    return 0;
}