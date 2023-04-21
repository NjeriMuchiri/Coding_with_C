#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("SHELL: %s\n", getenv("SHELL"));
    printf("SESSION_MANAGER: %s\n", getenv("SESSION_MANAGER"));
    printf("HOME: %s\n", getenv("HOME"));
    printf("PATH: %s\n", getenv("PATH"));
}