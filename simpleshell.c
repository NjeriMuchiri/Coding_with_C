#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

//just a simple shell

int main()
{
    char buf[512];
    char *argv[512];

    for (;;)
    {
        printf("$ ");
        if (!fgets(buf, sizeof(buf), stdin)) break;
        printf(buf, argv);
        execve(argv[0], argv, NULL);
    }
    
}