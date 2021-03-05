#include <stdio.h>
 
int main()
{
    /* Constant number of month declarations */
    const int A[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mon;
 
    /* Input month number from user */
    printf("Enter month number (1-12): ");
    scanf("%d", &mon);
 
 
    if(mon >= 1 && mon <= 12)
    {
        /* Print number of days */
	printf("%d days", A[mon - 1]);
    }
    else
    {
        printf("Invalid input! Please enter month number between (1-12).");
    }
 
    return 0;
}