#include <stdio.h>

int main()
{
   char output_it[100];
   printf("$ ");
   fgets(output_it, 100, stdin);
//    scanf("%99s", output_it);
   printf("%s",output_it);
   return (0);
}