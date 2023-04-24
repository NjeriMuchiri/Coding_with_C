#define _POSIX_SOURCE
#include <stdio.h>
#undef _POSIX_SOURCE
#include <unistd.h>

int main()
{
    char path[]="/tmp";

    if (access(path, F_OK) != 0)
    printf("'%s' does not exist!\n", path);
    else{
        if (access(path, R_OK) == 0)
        printf("You have read access to '%s'\n", path);
        if (access(path,W_OK) == 0)
        printf("You have write access to '%s'\n", path);
        if (access(path, X_OK) == 0)
        printf("You have search access to '%s'\n", path);
    }
}
