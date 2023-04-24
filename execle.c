// works just execl but you can provide your own env't variable 
// environment variable are passed as envp and its the last array element that should be NULL
#include <unistd.h>

int main()
{
    char *binaryPath = "/bin/bash";
    char *arg1 = "-c";
    char *arg2 = "echo \"Visit $HOSTNAME:$PORT from your browser.\"";
    char *const env[] = {"HOSTNAME=www.linuxhint.com", "PORT=8080", NULL};
    execle(binaryPath, binaryPath, arg1,arg2,NULL, env);

    return (0);
}
