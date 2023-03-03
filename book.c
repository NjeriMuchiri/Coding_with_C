// printing arrays in the reverse
// #include <stdio.h>

// int main()
// {
//     int i,n;
//     printf("Enter the value of N: ");
//     scanf("%d", &n);
//     for(i = n; i >= 1; i--)
//     printf("%d", i);
//     printf("\b\n"); //To remove the comma(,) printed at the last */
// }

// fibonacci
//  #include <stdio.h>

// int main()
// {
//     int prev,next,cnt,sum,n;
//     printf("Enter the value of N: ");
//     scanf("%d", &n);
//     prev = 0;
//     next=cnt=1;
//     while(cnt <= n)
//     {
//         printf("%d,",next);
//         sum = prev + next;
//         prev = next;
//         next = sum;
//         cnt++;
//     }
// printf("\b\n");
// }

// Factorial of number n
// #include <stdio.h>

// int main()
// {
//     int n, i;
//     long int fact;
//     printf("Enter the number to get Factorial: ");
//     scanf("%d", &n);
//     for (i = n, fact = 1; i >= 1; i--)
//         fact *= i;
//         printf("Fact is %ld\n", fact);
// }

#include <stdio.h>

int main()
{
   int n, i,j;
   printf("Enter the number of Rows: ");
   scanf("%d",&n);
   for(i = 1; i <= n; i++)
   {
    for(j = 1; j <= i; j++)
    printf("%d", j);
    printf("\n");
   }
}