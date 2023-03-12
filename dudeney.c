#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,sum=0,c;
    float cuberoot;
    printf("\nEnter the number :");
    scanf("%d",&a);
    cuberoot = cbrt(a);
    printf("\n cube root of number is :%f",cuberoot);
    c=a;
    while (c!=0)
    {
        b=c%10;
        sum =sum+b;
        c=c/10;
    }
    printf("\n Summition is :%d ",sum);
    if (sum*sum*sum==a)
    {
        printf("\nIt is dudeney number");
    }
    else
    {
        printf("\n it is not dudeney number");
    }
    return 0;
    
}