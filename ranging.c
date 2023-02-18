#include <stdio.h>
/*Prints the range of a number*/

int main()
{
    int n,lower_r,upper_r;
    printf("Enter a number: ");
    scanf("%d",&n);
         lower_r = n%10 * 10; /*the arithmetic operators work from left to right */
         upper_r = lower_r + 10;
    printf("Range is between  %d - %d", lower_r,upper_r);
}
