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

// #include <stdio.h>

// int main()
// {
//    int n, i,j;
//    printf("Enter the number of Rows: ");
//    scanf("%d",&n);
//    for(i = 1; i <= n; i++)
//    {
//     for(j = 1; j <= i; j++)
//     printf("%d", j);
//     printf("\n");
//    }
// }

// #include <stdio.h>

// void print(int nb)
// {
//    if (nb < 0)
//    {
//       return;
//    }
//    printf("%d", nb);
//    nb--;
//    print(nb);
// }

// int main(void)
// {
//    print(4);
//    return (0);
// }

#include <stdio.h>
int main()
{
   enum{false,true};
   int prev, n, flag=true, i;
   printf("Enter number 1: ");
   scanf("%d", &n);

   prev = n;
   i = 2;

   while(n != -1)
   {
      printf("Enter number %d", i++);
      scanf("%d", &n);
      if (n < prev && n != -1)
      flag = false;
      prev = n;
   }
if (flag == false)
printf("Not in ascending order");
else
printf("In ascending order");
}