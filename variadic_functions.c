#include <stdio.h>
#include <stdarg.h>

// print all args one at a time until a negative argument is seen. all args are assued to be of int type

void printargs(int arg1, ...)
{
    va_list ap;  //va_list is for declaring a variable type of va_list
    int i;

    va_start(ap, arg1); //va_start is then called with two arguments: the second one is the name of the last named parameter of the function
    for (i = arg1; i >= 0; i = va_arg(ap, int)) //invocation of va_arg macro yields the next argument: 1st argumentto va_arg is the va_list before function returns
    printf("%d", i);
    va_end(ap);
    putchar('\n');
}
int main(void)
{
    printargs(5, 2, 14, 84, 97, 15, -1, 48, -1);
    printargs(84, 51, -1, 3);
    printargs(-1);
    printargs(1, -1);
    return 0;
}

