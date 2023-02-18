#include <stdio.h>
/*A program that adds three numbers*/
int main()
{
    int n,a,b,c,sum,k1;
    printf("Enter a three digit number: ");
    scanf("%d",&n);
    a=n/100; /*first digit*/
    k1=n%100;
    c=k1%10; /*last digit*/
    b=k1/10; /*middle digit*/
    printf("\nFirst Digit = %d\nMiddle Digit = %d\nLast Digit = %d\n",a,b,c);
    sum = a + b + c;
    printf("\nSum of all 3-Digits: %d", sum);
    return 0;
}