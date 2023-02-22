#include <stdio.h>

int main()
{
    int count = 0;
    float num = 0, sum = 0, avg = 0;
    printf("Enter score (-1 to stop): ");
    scanf("%f",&num);
    while (num >= 0)
    {
        sum += num;
        count ++;
        printf("Enter score (-1 to stop): ");
        scanf("%f", &num);
    }
    avg = sum/count;
    printf("\nAverage = %f", avg);
    printf("\nSum = %f\n", sum);

}