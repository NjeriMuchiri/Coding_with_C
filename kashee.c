#include <stdio.h>
#include <string.h>
/*Program to print hello kashee*/
int main()
{
    char name;
    printf("Please enter your name: ");
    scanf("%s", &name);
    if(name == "kashee")
    {
      printf("Hi Kashee");
    }
    else
    {
        printf("Hello you!");
    }
}