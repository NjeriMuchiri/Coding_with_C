#include <stdio.h>
// main - prints all argumets without using ac
// @ac: number of argumets in av
// @av: array of strings(arguments)

int main(int ac, char **av)
{
    int i;
    for(i = 0; i < ac; i++)
    {
        (void) ac;
        printf("%s\n", av[i]);
    }
    return (0);
}