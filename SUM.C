#include <stdio.h>
int main()
{
    int n,a,b,sum;
    printf("Enter two numbers: ");
    scanf("%d",&n);
    b = n%10; /*last digit*/
    a=n/10; /*first digit*/
    printf("\nFirst Digit= %d\nLast Digit= %d\n",a,b);
    sum = a+b;
    printf("\nSum is= %d",sum);
    return 0;
}
