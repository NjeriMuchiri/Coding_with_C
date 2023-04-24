#include <unistd.h>
#include <stdio.h>

int main()
{
    char s[100];
    printf("%s\n", getcwd(s,100));

    chdir("..");
    printf("%s\n", getcwd(s, 100));

    if(chdir("/usr") != 0)
    perror("chdir() to /usr failed");

    if (chdir("/tmp") != 0)
    perror("chdir() to /temp failed");

    if (chdir("/error") != 0)
    perror("chdir() to /error failed");

    return 0;
}