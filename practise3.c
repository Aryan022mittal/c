#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number a :");
    scanf("%d",&a);
    printf("enter the number b :");
    scanf("%d",&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("\n swap of a is :%d",a);
    printf("\n swap of b is :%d",b);
    return 0;
}