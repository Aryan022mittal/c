#include<stdio.h>
int main()
{
    char line[100];
    printf("\nEnter ur name :");
    scanf("%[^\n]",&line);
    printf("\nHello %s",line);
    return 0;

}