#include<stdio.h>
float power(float,int);
int main()
{
    float x,pow;
    int y;
    printf("\nenter the number :");
    scanf("%f",&x);
    printf("\nenter the value of power:");
    scanf("%d",&y);
    pow=power(x,y);
    printf("value of power of number :%f",pow);
    return 0;

}
float power(float x,int y)
{
    int i;
    float p=1;
    for ( i = 1; i <=y; i++)
    {
        p=p*x;
    }
    return(p);
}