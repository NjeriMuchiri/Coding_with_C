#include <stdio.h>
/* A prograam that adds the last and the first digits */

int main()
{
    int n,a,b,sum;
    printf("Enter a four digit number: ");
    scanf("%d", &n);
    a=n%10;
    b=n/1000;
    sum=a+b;
    printf("Sum of the first and last digit is %d", sum);
    
    return (0);
}
