// #include <stdio.h>

// int main()
// {
//     printf("%ld\n", sizeof(int)); //size of is a unary operator
//     return 0;
// }

//limits.h header

#include <stdio.h>
#include <limits.h>

int main()
{
    int var1 = INT_MIN;
    int var2 = INT_MAX;

    printf("range of signed integer is from: %d to %d\n", var1, var2);
    return 0;
}
