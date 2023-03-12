#include<stdio.h>
int main()
{
    float a1,a2,a3,sum;
    printf("\nEnter the anle 1 :");
    scanf("%f",&a1);
    printf("\nEnter the anle 2 :");
     scanf("%f",&a2);
    printf("\nEnter the anle 3 :");
     scanf("%f",&a3);
     if (a1 + a2 + a3 == 180 && a1 !=0 , a2 !=0 , a3 !=0 )
     {
        printf("\nthe given triangle is valid ");
     }
     else{
        printf("\n the given triangle is not valid");
     }
     return 0;
}