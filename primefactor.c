#include<math.h>
#include<stdio.h>
int primefactor();
int main()
{
    int n,i,c=0,num =1;
    printf("\nEnter the number :");
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            num =0;
            break;
        }
    }
   if(n<=1)
     num=0;
     if (num ==1)
   {
       printf("number is prime");
   }
   else
   printf("number is not prime");
   primefactor(n);
   return 0;
}
int primefactor(int n)
{
    int count;
    printf("\nPrime factor of %d\n",n);
    printf("1");
    for ( count = 2; n>1; count++)
    {
        while (n%count==0)
        {
            printf("*%d",count);
            n=n/count;
        }
        
    }
    printf("");
   
    
    return 0;
}