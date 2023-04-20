#include <stdio.h>

//prints the env't
//Return always 0

int main(int ac, char **av, char **env)
{
    unsigned int i;
    i = 0;
    while (env[i] != NULL)
    {
        printf("%s\n", env[i]);
        i++;
    }
    return (0);
}