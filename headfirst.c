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
// int main()
// {
//     char ex[20];
//     puts("Enter a previous job: ");
//     scanf("%19s", ex);
//     printf("Dear %s. \n\n\tYou're history.\n", ex);
// }
// int main()
// {
//     char name[16];
//     puts("Enter your name: ");
//     fgets(name, 8, stdin);
//     do
//     {
//         printf("Hi %s", name);
//     }
//     while (!name);
//     {
//         puts("Hi");
//     }
//     return 0;
// }
// int main()
// {
//     int* pc, c;
//     c = 5;
//     pc = &c;
//     printf("%d\n", *pc);
//     printf("C is stored at %p\n: ", &c);
// }
void  go_south_east(int *lat, int *lon)
{
    *lat -= 1;
    *lon += 1;
}
int main()
{
    int latitude = 32;
    int longitude = -64;

    go_south_east(&latitude, &longitude);
    printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
    return 0;
}