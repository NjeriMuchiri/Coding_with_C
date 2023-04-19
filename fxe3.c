#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("We are in fxe3.c\n");
    printf("PID of fxe3.c = %d\n", getpid());
    return (0);
}