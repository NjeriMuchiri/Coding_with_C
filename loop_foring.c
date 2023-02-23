// #include <stdio.h>

// int main()
// {
//     int i = 0;
//     for(i = 0; i < 100; i++)
//     printf("\ni=%d\n", i);
// }

// // Program that gets the temperatures of week days and the verage for that week
// #include<stdio.h>

// int main()
// {
//     int count = 0;
//     float num = 0, sum = 0, avg = 0;
//     for(count = 0; count < 7; count++)
//     {
//         printf("ENter temperature: ");
//         scanf("%f", &num);
//         sum += num;
//     }
//     avg = sum/7;
//     printf("\nAverage=%f\n", avg);
// }

// program that prints a multiplication chart
// // while loop
// #include<stdio.h>
//  int main()
//  {
//     int i = 1;
//     while(i<=5)
//     {
//         int j = 1;
//         while(j<=5)
//         {
//         printf("%d * %d = %d\n",i,j, i*j);
//         j++;
//         }
//         i++;
//         printf("\n");
//     }
//     return (0);
//  }
// for loop
 #include <stdio.h>

 int main()
{
    for (int i = 1; i <= 5; i++)
    {
         for (int j = 1; j <=5; j++)
        printf("%d * %d = %d\n",i,j, i*j);
  }
 return (0);
}

// do while loop
// #include <stdio.h>

// int main()
// {
//     int i = 1;
//     do 
//     {
//         int j =1;
//         do
//         {
//             printf("%d * %d = %d\n", i,j , i * j);
//             j++;
//         } 
//         while(j <=5);
//         i++;
//         printf("\n");
//     }
//     while(i <= 5);
//     return (0);
// }