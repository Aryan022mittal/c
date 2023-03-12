#include<stdio.h>
int main()
{
    float n,num;
    printf("\nEnter the number");
    scanf("%f",&n);
    num=n;
    if(num<0)
    {
        num=(-1)*num;
         printf("the absolute value of %f is %f",n,num);
    }
    else{
        printf("the no is in absolute form");
    }
   

    return 0;

}