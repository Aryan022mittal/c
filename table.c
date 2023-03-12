#include<stdio.h>
int main()
{
    int num,i;
    printf("\nEnter the number to make tabl6e:");
    scanf("%d",&num);
    printf("\nTable of %d",num);
    for(i=1;i<=10;i++)
    {
        printf("\n %d*%d = %d",num,i,(num*i));
    }
    
    return 0;
}