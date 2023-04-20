#include <stdio.h>
#include <unistd.h>

int main(){
extern char **environ;

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
