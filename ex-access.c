// #define _POSIX_SOURCE
// #include <stdio.h>
// #undef _POSIX_SOURCE
// #include <unistd.h>

// int main()
// {
//     char path[]="/tmp";

//     if (access(path, F_OK) != 0)
//     printf("'%s' does not exist!\n", path);
//     else{
//         if (access(path, R_OK) == 0)
//         printf("You have read access to '%s'\n", path);
//         if (access(path,W_OK) == 0)
//         printf("You have write access to '%s'\n", path);
//         if (access(path, X_OK) == 0)
//         printf("You have search access to '%s'\n", path);
//     }
// }

#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

extern int errno;

int main(int argc, const char *argv[])
{
    char path[] = "structure.c";
    int fd = access(path, (R_OK | W_OK) & X_OK);
    if (fd == -1)
    {
        printf("Error number : %d\n", errno);
        perror("Error: ");
    }
    else
    {
        printf("No error\n");
    }
    if (access(path, F_OK) != 0)
        printf("'%s' does not exist!\n", path);
        else
        {
         if (access(path, R_OK) == 0)
         printf("You have read access to '%s'\n", path);
         if (access(path,W_OK) == 0)
         printf("You have write access to '%s'\n", path);
         if (access(path, X_OK) == 0)
         printf("You have search access to '%s'\n", path);
        }
        return 0;
}
