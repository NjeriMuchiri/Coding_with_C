#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("PID of fxe.c = %d\n", getpid());
    char *args[] = {"Hello", "Neso", "Academy", NULL};
    execv("./fxe3.c", args);
    printf("Back to fxe.c");
    return (0);
}