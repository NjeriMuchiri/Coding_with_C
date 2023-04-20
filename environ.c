#include <stdio.h>
#include <unistd.h>

extern char **environ;
int main(){

int i;
for(i = 0; environ[i]; i++)
{
    printf("%s\n", environ[i]);
}
return (0);

// while(environ[i])
// {
// printf("%s\n", environ[i++]);
// }

}
