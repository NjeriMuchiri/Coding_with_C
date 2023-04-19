#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("PID of fxe2.c = %d\n", getpid());
    char *args[] = {"Hello", "Neso", "Academy", NULL};
    execv("./fxe3", args);
    printf("Back to fxe2.c\n");
    return (0);
}