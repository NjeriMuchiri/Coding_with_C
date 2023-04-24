#include <unistd.h>
//we do not have to give the whole path
int main(void)
{
    char *programName = "ls";
    char *arg1 = "-lh";
    char *arg2 = "/home";

    execlp(programName, programName, arg1, arg2, NULL);

    return (0);
}