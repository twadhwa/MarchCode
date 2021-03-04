#include <stdio.h>
#include <conio.h>
int main()
{
    int month,year;
    printf("ENTER A MONTH AND YEAR (e.g. 5 for may, 2001 for year) TO FIND TOTAL NUMBER OF DAYS IN IT\n");
    scanf("%d %d",&month,&year);
    if(month<=7 && month!=2)
    {
       if(month%2==0 && month!=2)
        printf("30 DAYS\n");
       else
        printf("31 DAYS\n");
    }
    else if(month==2)
    {
        if(year%4==0)
            printf("29 DAYS\n");
        else
            printf("28 DAYS\n");
    }
    else
    {
       if(month%2==0 && month!=2)
        printf("31 DAYS\n");
      else
        printf("30 DAYS\n");
    }
    return 0;
}
