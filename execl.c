#include <unistd.h>
//giving the full path /bin/ls
int main(void)
{
    char *binaryPath = "/bin/ls";
    char *arg1 = "-lh";
    char *arg2 = "/home";

    execl(binaryPath, binaryPath, arg1, arg2,NULL);

    return (0);
}