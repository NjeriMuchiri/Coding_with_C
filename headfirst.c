#include <stdio.h>

// int main()
// {
//     /* char name[30];
//     printf("Enter your name: ");
//     fgets(name, 30, stdin);
//     printf("Hello %s\n", name);
//     return 0; */
//     puts("C rocks");
//     return 0;
// }
int main()
{
    char ex[20];
    puts("Enter a previous job: ");
    scanf("%19s", ex);
    printf("Dear %s. \n\n\tYou're history.\n", ex);
}