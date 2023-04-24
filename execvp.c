//works like execv but the path environment variable is used
//whole path is not needed
#include <unistd.h>

int main(void)
{
    char *programName = "ls";
    char *args[] = {programName, "-lh", "/home", NULL};
    execvp(programName, args);

    return (0);
}

