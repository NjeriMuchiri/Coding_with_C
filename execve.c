// #include <stdio.h>
// #include <unistd.h>

// int main(void)
// {
//     char *argv[] = {"/bin/ls", "-l", "/usr/",NULL};
//     printf("Before execve\n");
//     if (execve(argv[0], argv, NULL) == -1)
//     {
//         perror("Error");
//     }
//     printf("After execve\n");
//     return (0);
// }

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

int main()
{
    printf("Before execve\n");
    char *argv[5];
    argv[0] = "/bin/ls";
    argv[1] = "-l";
    argv[2] = "/usr/";
    argv[3] = NULL;

    if(execve(argv[0], argv, NULL) == -1)
    {
        // perror("Error");
        printf("Error: %i\n", errno);
    }
    printf("After execve\n");
    return(0);

}