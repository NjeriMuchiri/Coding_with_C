#include <stdio.h>
// main - prints all argumets without using ac
// @ac: number of argumets in av
// @av: array of strings(arguments)

int main(int __attribute__((unused)) ac, char **av)
{
    int i;

    for(i = 0; av[i]; i++)
    {
        // (void) ac;
        printf("%s\n", av[i]);
    }
    return (0);
}
// int main(int argc, char *argv[])
// {
//     int i;
//     for (i= 0; i < argc; i++)
//     printf("%s\n", argv[i]);
//     return 0;
// }
