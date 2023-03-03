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

//fibonacci
#include <stdio.h>

int main()
{
    int prev,next,cnt,sum,n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    prev = 0;
    next=cnt=1;
    while(cnt <= n)
    {
        printf("%d,",next);
        sum = prev + next;
        prev = next;
        next = sum;
        cnt++;
    }
printf("\b\n");
}