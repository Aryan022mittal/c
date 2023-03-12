#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("\nEnter the age of ram :");
    scanf("%d",&num1);
    printf("\nEnter the age of shyam");
    scanf("%d",&num2);
    printf("\nEnter the age of ajay:");
    scanf("%d",&num3);
    if(num1>=num2)
    {
        if(num1>=num3)
        {
            printf("\nthe age of ram is greater and age is  %d\n",num1);
        }
        else
        {
            printf("\nthe age of ajay is greater and age is %d",num3);
        }
    }
    else if(num2>=num3)
    {
        printf("\nthe age of shyam is greater and age is %d",num2);
    }
    else
    {
        printf("\nthe age of ajay is greater and age is %d",num3);
    }
    
    return 0;
}