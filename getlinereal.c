#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *out_put;
    size_t nbytes = 100;
    int get_output;

    printf("$ ");
    out_put = (char *) malloc (nbytes + 1);
    get_output = getline(&out_put,&nbytes,stdin);
    if (get_output == -1)
    {
        puts ("error");
    }
    else
    {
     printf("%s",out_put);
    }
    return(0);
}