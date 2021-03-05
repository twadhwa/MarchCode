#include <stdio.h>
int main() {
    
    int A;
    printf("Enter an integer: ");
    scanf("%d", &A);
    
    if(A % 2 == 0)
        printf("%d is even.", A);
    else
        printf("%d is odd.", A);
    
    return 0;
}