// #include <stdio.h>

// int main()
// {
//     int i = 0;
//     for(i = 0; i < 100; i++)
//     printf("\ni=%d\n", i);
// }

// // Program that gets the temperatures of week days and the verage for that week
// #include<stdio.h>

// int main(){
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
#include<stdio.h>

int main()
{
    int i,j;
    for(i=1;i<10; i++)
    {
        for(j=1; j<10; j++)
        printf("%3d", i*j);
        printf("\n");
    }
}