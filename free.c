// #include <stdio.h>
// #include <stdlib.h>

// //malloc
// // main - introduction to malloc and free
// //Return: 0
// int main(void)
// {
//     char *str;
//     str = malloc(sizeof(char) * 3);
//     str[0] = 'o';
//     str[1] = 'k';
//     str[2] = '\0';
//     printf("%s\n", str);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// //main - introduction to malloc and free
// //Return: 0
// int main(void)
// {
//     int *tab;
//     tab = malloc(sizeof(*tab) * 3);
//     tab[0] = 98;
//     tab[1] = -1024;
//     tab[2] = 402;
//     printf("%d,%d,%d\n", tab[0],tab[1],tab[2]);
//     return(0);
// }

// #include <stdio.h>
// #include <stdlib.h>

// m- stores int in a new allocated space in memory and prints the um
//@n0: integer to store and print
//@n1: integer to store and print
//@n2: integer to store and print
//Return: nothing

// void m(int n0,int n1, int n2)
// {
//     int *t;
//     int sum;
//     t = malloc(sizeof(*t) * 3);
//     t[0] = n0;
//     t[1] = n1;
//     t[2] = n2;
//     sum = t[0] + t[1] +t[2];
//     printf("%d + %d + %d = %d\n", t[0], t[1], t[2], sum);
//     free(t); //function for freeing the memory
// }
// int main(void)
// {
//     m(98, 402, -1024);
//     return (0);
// }

// #include <stdio.h>
// #include <stdlib.h>

// //main - freeing the memory previously allocated
// //Return: 0;

// int main(void)
// {
//     while (1)
//     {
//         malloc(sizeof(char) * 1024);
//     }
//     return (0);
// }

//valgrind command- programming tool for memory debugging, memory leak detection and profiling
// freeing memory with function free
// #include <stdio.h>
// #include <stdlib.h>

// void m(int n0, int n1, int n2)
// {
//     int *t;
//     int sum;

//     t = malloc(sizeof(*t) * 3);
//     t[0] = n0;
//     t[1] = n1;
//     t[2] = n2;
//     sum = t[0] + t[1] + t[2];
//     printf("%d + %d + %d = %d\n", t[0], t[1], t[2], sum);
//     free(t);
// }

// int main(void)
// {
//     m(98, 402, -1024);
//     return (0);
// }

//one very easy way to check that the string literal is actually stored in your executables is to se the command strings
//It is also possible to use objdump to print the .rodata section contents - $ objdump -s -j .rodata free
// segf - let's segfult \o/
//Return: nothing

void segf(void)
{
    char *str;
    str = "Holberton";
    str[0] = 's';
}
//main - concept introduction
//Return 0
int main(void)
{
    segf();
    return (0);
}