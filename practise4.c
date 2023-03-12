#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("\nEnter the three no : ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
    {
        max=a;
    }
    else if (b>c)
    {
        max=b;
    }
    else{
        max=c;
    }
    printf("\nMaximaum number id %d",max);
    return 0;
    
    
}