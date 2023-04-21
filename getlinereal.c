#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main()
{
    char *out_put;
    size_t nbytes = 0;
    ssize_t get_output;

    printf("$ ");
    out_put = (char *) malloc (nbytes); // calculating the actual size of strings in bytes
    get_output = getline(&out_put,&nbytes,stdin);
    if (get_output == -1)
    {
        printf("exiting simple shell");
        return(-1);
    }
    else
    {
     printf("%s",out_put);
     free(out_put); // deallocating memory
    }
    return(0);
}