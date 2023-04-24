//closing a directory
#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>

int main()
{
    DIR *dir;
    struct dirent *entry;
    int count;

    if ((dir = opendir("/")) == NULL)
    perror("opendir() error");
    else
    {
     count = 0;
     while ((entry = readdir(dir)) != NULL)
     {
        printf("directory entry %03d: %s\n", ++count, entry->d_name);
     }
     closedir(dir);
    }
}