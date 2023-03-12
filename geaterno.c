#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("\nEnter the first number :");
    scanf("%d",&num1);
    printf("\nEnter second number");
    scanf("%d",&num2);
    printf("\nEnter the third number:");
    scanf("%d",&num3);
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("\nLargest number is %d\n",num1);
        }
        else
        {
            printf("\nLaregest number is %d",num3);
        }
    }
    else if(num2>num3)
    {
        printf("\nLargest number is %d",num2);
    }
    else
    {
        printf("\nLargest number is %d",num3);
    }
    return 0;
}