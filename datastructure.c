#include<stdio.h>
int main()
{
    char name[3];
    float price[3];
    int pages[3];
    int i;
    
    for ( i = 0; i <= 2; i++)
    {
        printf("enter names,price,no of page of 3 books");
        scanf("%C %f %d",&name[i],&price[i],&pages[i]);
    }
    printf("\nand this is what u entered\n");
    for (i=0;i<=2;i++)
    {
        printf("%c %f %d\n",name[i],price[i],pages[i]);
        
    }
    return 0;
}