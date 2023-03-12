#include<math.h>
#include<stdio.h>
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
   return 0;
}
