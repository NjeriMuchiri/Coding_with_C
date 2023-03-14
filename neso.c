//characters
// #include <stdio.h>
// int main()
// {
//     char var = 65;
//     printf("%c\n", var);
//     return 0;
// }

//smiley
#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 0; i <= 10; i++)
    {
        for (j = 0; j <= 5; j++)
        {
            printf("%s", "\u263A");
        }

        printf("\n");
    }

    return 0;
}