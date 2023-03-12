#include<stdio.h>
int fibbo(int);
int main()
{
    int term,i,n=0;
    printf("enter number of terms u want ");
    scanf("%d",&term);
    for ( i = 1; i <= term; i++)
    {
        printf("%d\n",fibbo(n));
        n++;

    }
    return 0;

}
int fibbo(int x)
{
    if (x==0||x==1)
    {
        return x;
    }
    else{
        return(fibbo(x-1)+fibbo(x-2));
    }
    return(x);
}