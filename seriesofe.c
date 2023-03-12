#include<stdio.h>
#include<math.h>
long int fact(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int n;
    printf("\nenter the number");
scanf("%d",&n);
double e=0;
for(int i=0;i<=n;i++)
{
    if (i%2==0)
    e += 1.0/fact(i);
    else
    e -= 1.0/fact(i);
}
printf("%lf",e);
return 0;
}
