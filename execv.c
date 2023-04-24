//works just like execl function, the first element of the arr should be the path of the executable file
#include <unistd.h>

int main(void)
{
char *binaryPath = "/bin/ls";
char *args[] = {binaryPath, "-lh", "/home", NULL};
execv(binaryPath, args);
return (0);
}