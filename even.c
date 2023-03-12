#include<stdio.h>
int main()
{
    int i,num,sum=0;
    printf("\nEnter the maximum number limit:");
    scanf("%d",&num);
    printf("\neven number between 1000 to %d are:\n",num);
    for ( i = 1000; i  <=num; i++)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
            sum=sum+i;

    
        }
    }
    printf("\nthe sum of all even number fromm 1000 to %d = %d",num,sum);
    return 0;
}