#include<stdio.h>
#include<conio.h>
int main()
{
int n, i, j;
printf("Enter number of rows: ");
scanf("%d",&n);
for(i = 1; i <= n; i++)
{
for(j = i; j < n; j++)
{
printf(" ");
}
for(j = 1; j <= i; j++)
{
printf("% d",j);
}
printf("\n");
}
for(i = n; i >= 1; i--)
{
for(j = i; j <= n; j++)
{
printf(" ");
}
for(j = 1; j < i; j++)
{
printf("% d",j);
}

printf("\n");
}
return 0;
}