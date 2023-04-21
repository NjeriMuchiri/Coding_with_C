#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av, char **env)
{
    int i;
    char *value;
    // char *name;


   for(i = 0; value = env[i]; i++)
   {
    printf("%s\n", value);
   }
}

