#include<stdio.h>
int main()
{
    float s,a,b,c,ar,pr;
    printf("\nEnter one side of triangle:");
    scanf("%f",&a);
    printf("\nEnter second side of triangle:");
    scanf("%f",&b);
    printf("\nEnter the third side of tringle:");
    scanf("%f",&c);
    s = ( a + b + c)/2;
    ar = sqrt( (s)*(s-a)*(s-b)*(s-c)) ;
    printf("\n Semi perimeter of triangle : %f\n",s);
    printf("\n Area of triangle : %f\n",ar);
    return 0;


}