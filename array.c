//wap to print the average of n numbers
#include <stdio.h>
#include <math.h>
int main()
{
    int a[50],n,i,sum = 0;
    float avg;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &a[i]);
        sum += a[i];
    }
    avg = (float)sum/n;
    printf("average = %f",avg);
}