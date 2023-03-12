#include<stdio.h>
int main()
{
    float a,b,swp,c;
    printf("\nenter the number a : ");
    scanf("%f",&a);
    printf("\n enter the number b :");
    scanf("%f",&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("\nafter swapping,first number =%f\n",a);
    printf("\nafter swapping,second number =%f\n",b);
    return 0;
}