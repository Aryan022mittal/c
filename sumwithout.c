#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,sum;
    printf("\nenter the number a:");
    scanf("%d",&a);
    printf("\nenter the number b:");
    scanf("%d",&b);
    sum=log(exp(a)*exp(b));
    printf("sum of two number is :%d",sum);
    return 0;
}