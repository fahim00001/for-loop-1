#include <stdio.h>
int main ()
{
    int n;
    printf("enter your number :");
    scanf("%d",&n);
    int sum = 0;
    for (int  i = 1; i <= 7; i++)
    {
        printf("%d",i);
        sum += i ;
    }
    printf("\n%d",sum);
    return 0;
}