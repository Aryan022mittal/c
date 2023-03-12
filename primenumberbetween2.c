#include<stdio.h>
int main()
{
    int a,b,i,j,flag,sum=0;
    printf("\nEnter the lower limit:");
    scanf("%d",&a);
     printf("\nEnter the higher limit:");
    scanf("%d",&b);
    printf("prime number between %d and %d are:",a,b);
    for ( i = a; i <=b; i++)
    {
        if (i==0||i==1)
        continue;
        flag=1;
        for ( j = 2; j <=i; ++j)
        {
            if (i%j==0)
            {
                flag=0;
                break;
            }
            else{
                flag=1;
                break;
            }
            
        }
        if (flag==1)
           { printf(" %d",i);}
           
    }
    
    return 0;
}