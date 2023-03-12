#include<stdio.h>
int fact(int);
int main()
{
    int num,factorial;
    printf("\nEnter the number to get factorial :");
    scanf("%d",&num);
    factorial=fact(num);
    printf("\nFactorial of %d is:%d",num,factorial);
    return 0;
}

    int fact(int num)
{
    int i;
    int factorial=1;
    for ( i = 1; i <= num ; i++)
    {
        factorial=factorial*i;
    }
    return(factorial);
}