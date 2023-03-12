#include<stdio.h>

int main()
{
    int n,digit;
    printf("\nEnter the positive number :");
    scanf("%d",&n);
    printf("\nEnter any digit to search :");
    scanf("%d",&digit);
   int num=n,i,j=0;
   while(num!=0)
   {
    i=num%10;
    if (i==digit)
    {
        j=num%100;
        if (j==((digit*10)+(digit)))
        {
            printf("yes");
            break;
        }
        else{
            printf("no");
        }
        
    }
        num=num/10;
   }
   
    return 0;    


}