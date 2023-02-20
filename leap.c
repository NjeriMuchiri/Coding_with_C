#include <stdio.h>

/*a program to check a leap year*/
int main()
{
    int y;
    printf("Enter an year: ");
    scanf("%d", &y);
    if(y%4 == 0)
    {
      printf("its a leap year!");
    }
    else{
        printf("its not a leap year");
    }
return 0;
}