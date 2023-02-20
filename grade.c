#include <stdio.h>

/*program to calculate the grde*/
int main()
{
    int grade;
    printf("Enter mark to be graded:  ");
    scanf("%d", &grade);
    if(grade >= 80 && grade < 90)
    {
      printf("%d grade is 'A' ", grade);
    }
    if (grade >= 70 && grade < 80)
    {
      printf("%d grade is 'B' ", grade);
    }
    if (grade >= 60 && grade < 70 )
    {
      printf("%d grade is 'C' ", grade);
    }
    if (grade < 50)
    {
      printf("%d grade is 'F' ", grade);
    }
return 0;
}