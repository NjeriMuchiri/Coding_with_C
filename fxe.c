#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    fork();
    printf("Hello Njesh the C programmer!\n PID = %d\n", getpid());
    return (0);
}