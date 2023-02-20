#include <stdio.h>
#include <math.h>

/*A program that checks whether its even or odd*/

int main()
{
   int num;
   printf("Please enter a number: ");
   scanf("%d", &num);
   if(num % 2 == 0)
   {
    printf("%d number you have entered is even",num);
   }
   else
   {
    printf("%d number you have entered is an odd number", num);
   }
   /*ternary operator: */
   /*(num % 2 == 0) ? printf("%d is even", num) : printf("%d is odd.", num)*/
return 0;
}

