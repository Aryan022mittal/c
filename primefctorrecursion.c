#include<stdio.h>
int factorial(int,int);
int main()
{
    int num;
    printf("enter the number to get prime factor:");
    scanf("%d",&num);
    factorial(num,2);
    printf("prime factor of number are ");
    return 0;
}
int factorial(int n,int b)
{
    if (b<=n)
    {
        if (n%b==0)
        {
            printf("%d\n",b);
            n=n/b;
        }
        else{
            b++;
        }
        factorial(n,b);
    }
    return(n);
}