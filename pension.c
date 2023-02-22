#include <stdio.h>
/*program to calculate tension*/

int main()
{
    int age;
    char gender, m,f;
    printf("Enter your age: ");
    printf("Enter your gender: ");
    scanf("%d %c", &age,&gender);
    if(age >= 90 && gender == m)
    {
        printf("Your pension is 4000");
    }
    else if (age >= 60 && gender == m)
    {
        printf("Your pension is 6000");
    }
    else if (age < 60 && gender == m)
    {
        printf("Your pension is 000");
    }
    if (age >= 90 && gender == f)
    {
        printf("Your pension is 3000");
    }
    if (age >= 60 && gender == f)
    {
        printf("Your pension is 5000");
    }
    if (age < 60 && gender == f)
    {
        printf("Your pension is 000");
    }
return 0;
}