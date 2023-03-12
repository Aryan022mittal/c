#include<stdio.h>
int main()
{
    int a[9],i;
     for ( i = 0; i < 9; i++)
    {
        printf("enter the array elents");
        scanf("%d",&a[i]);
    }
     if (a[i]==6)
    {
        for ( i = 0; i < 9; i++)
        {
            printf("sucessfully found");
            return 0;
         }
    }
     else
        {
            printf("unsucessful");
        }
       return 0;
    
}