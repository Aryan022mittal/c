#include<stdio.h>
int main()
{
    
    int num;
   // int q=num;
    int x=0;
    int rev=0;
    printf("\nenter the number to reverse it:");
    scanf("%d",&num);
    int q=num;
    while(num)
    {
        x=num%10;
        rev=rev*10+x;
        num=num/10;
    }
    if(q==rev)
    {
        printf("\npalidrom");
    }
    else{
        printf("\nnot a palidrom");
    }
    printf("%d\n",rev);
    return 0;

}