#include<stdio.h>
int main()
{
    int fc,c;
    printf("\nEnter the temperature in Fehrehnite:");
    scanf("%d",&fc);
    c=((fc-32)*5)/9;
    printf("\ntemperature in celcius:%d\n",c);
    return 0;
}