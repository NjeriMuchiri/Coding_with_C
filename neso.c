//characters
// #include <stdio.h>
// int main()
// {
//     char var = 128;
//     printf("%c\n", var);
//     return 0;
// }

//smiley
// #include <stdio.h>

// int main(void)
// {
//     int i, j;

//     for (i = 0; i <= 10; i++)
//     {
//         for (j = 0; j <= 5; j++)
//         {
//             printf("%s", "\u263A");
//         }

//         printf("\n");
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
// float var1 = 3.131592653589793113456;
// double var2 = 3.131592653589793113456;
// long double var3 = 3.131592653589793113456;

// printf("%ld\n", sizeof(float));
// printf("%ld\n", sizeof(double));
// printf("%ld\n", sizeof(long double));
// printf("%.16f\n", var1);
// printf("%.16f\n",var2 );
// printf("%.21Lf\n",var3);
// }
// #include <stdio.h>
// int main()
// {
//     printf("%d\n", printf("%s\n", "Hello World!"));
//     printf("%s\n", "Hello");
//     printf("%10s\n", "hello");
//     return (0);
// }
// #include <stdio.h>
// int main()
// {
//     char c = 255;
//     c += 10;
//     printf("%d", c);
//     return 0;
// }
// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     unsigned i = 1;
//     int j = -4;
//     printf("%u\n", i+j);
//     printf("%ld\n",sizeof(unsigned));
//     return 0;
// }
// scope = lifetime of a variable where it is applicable or available
// #include <stdio.h>

// int main()
// {
//     int var = 34;
// {
//     int var = 23;
//     printf("%d\n", var);
// }
// printf("%d\n", var);
// return 0;
// }

// #include <stdio.h>
// int fun();  //function prototype
// int var = 10;
// int main()
// {
//     int var = 3;
//     printf("%d\n", var);
//     fun();
//     return 0;  
// }
// int fun()
// {
//     printf("%d\n",var);
// }

//automatic variables
// #include <stdio.h>
// int main()
// {
//     auto int var;
//     printf("%d\n", var);
//     return 0;
// }

//static modifiers
// int count;
// int increment() 
// {
//     count += 1;
//     return count;
// }
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int value;
//     value = increment();
//     value = increment();
//     value = increment();

//     printf("%d\n", value);
//     return 0;
// }

//date and time macros
// #include <stdio.h>

// int main()
// {
//     printf("The Date Today is: %s\n", __DATE__);
//     printf("Time is: %s\n", __TIME__);
//     return 0;
// }

//Constants
// #include <stdio.h>

// int main()
// {
//     int var = 067;
//     printf("%o\n", var);
//     printf("%d\n", var);
// }

#include <stdio.h>

#define STRING "%s\n"
#define NESO "Welcome to Neso Academy!"

int main()
{
    printf(STRING, NESO);
    return 0;
}