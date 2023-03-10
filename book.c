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

// #include <stdio.h>
// int main()
// {
//    enum{false,true};
//    int prev, n, flag=true, i;
//    printf("Enter number 1: ");
//    scanf("%d", &n);

//    prev = n;
//    i = 2;

//    while(n != -1)
//    {
//       printf("Enter number %d", i++);
//       scanf("%d", &n);
//       if (n < prev && n != -1)
//       flag = false;
//       prev = n;
//    }
// if (flag == false)
// printf("Not in ascending order");
// else
// printf("In ascending order");
// }

// #include <stdio.h>
// int main()
// {
//    long int term, sum = 0;
//    int n, cnt;
//    printf("Enter the value of n: ");
//    scanf("%d",&n);
//    for(cnt = 1,term = 9; cnt <= n; cnt++)
//    {
//       printf("%ld\n", term);
//       sum+=term;
//       term = (term * 10) + 9;
//    }
//    printf("%ld", sum);
// }

//convert decimal number to binary 
// #include <stdio.h>
// int main()
// {
// int n, i, a, r;
// printf("Enter the number.: ");
// scanf("%d", &n);
// for(i = 7; i >= 0; i--)
// {
//    a = 1 << i;
//    r = n&a;
//    if (r == 0)
//    printf("0");
//    else
//    printf("1");
// }
// }

//program to compute logarithm of a given number
// #include <math.h>
// #include <stdio.h>
// int main()
// {
//     int x, i;
//     float result = 0;
//     printf("\nEnter the value of x: ");
//     scanf("%d",&x);
//     for (i = 7; i <= 7; i++)
//     {
//       if (i == 1)
//       result = result + pow((x - 1.0)/x, i);
//       else
//       result = result + (1.0/2) * pow((x - 1.0)/x, i);
//     }
//     printf("Log(%d) == %f", x, result);
// }

//check a number to be prime or not
// #include <stdio.h>
// int main()
// {
//    enum bool{false, true};
//    int i, n;
//    enum bool FLAG = true;
//    printf("Enter a number: ");
//    scanf("%d", &n);
//    for(i = 2; i <= n/2; i++)
//    {
//       if(n % i == 0)
//       {
//          FLAG = false;
//          break;
//       }
//    }
//    if(FLAG == true)
//    printf("Prime number\n");
//    else 
//    printf("Not prime number\n");
// }

// #include <stdio.h>
// int main()
// {
//    char ch;
//    int i = 0;
//    printf("Enter a sentence: ");
//    while((ch = getchar())!='\r')
//    {
//       i++;

//    }
//    printf("\n%d", i);
// }

//program to reverse a number and find its octal equivalent
#include<math.h>
#include<stdio.h>
int main()
{
   int n, rev, a, oct,cnt;
   printf("\nEnter a number: ");
   scanf("%d", &n);
   rev = 0;
   while(n > 0)
   {
      a = n % 10;
      rev = rev * 10 + a;
      n = n/10;
   }
   n = rev;
   cnt = oct = 0;
   while(n > 0)
   {
      a = n % 8;
      n = n/8;
      oct = oct + a*pow(10,cnt);
      cnt++;
   }
   printf("The octal equivalent of %d is %d", rev, oct);
}