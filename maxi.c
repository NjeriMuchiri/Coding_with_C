#include <stdio.h>

/*Program to print the max of two numbers*/

int main()
{
    int num1,num2;
    printf("Enter two numbers please: ");
    scanf("%d %d",&num1,&num2);
    if(num1 > num2)
    {
        printf("%d is greater", num1);
    }
    else
    {
        printf("%d is greater", num2);
    }

return 0;
}