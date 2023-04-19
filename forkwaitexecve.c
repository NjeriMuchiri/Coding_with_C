#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
   char *argv[5] ;
   argv[0] = "/bin/ls";
   argv[1] = "-l";
   argv[2] = "/tmp";
   argv[3] = NULL;
   
   char *envp[] = {NULL};

   pid_t child_pid;
   pid_t pid;
   int status;

   pid = fork();
   child_pid = fork();
   child_pid = fork();

   if (pid == 0)
   {
    execve(argv[0], argv, NULL);
    perror("Error: " );
    exit(1);
   }
 while (wait(&status) !=pid);
}