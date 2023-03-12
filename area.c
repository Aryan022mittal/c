#include<stdio.h>
int main()
{
    float l,b,r,ar,pr,cr;
    printf("\nEnter length:");
    scanf("%f",&l);
    printf("\nEnter breadth:");
    scanf("%f",&b);
    printf("\nEnter the radius:");
    scanf("%f",&r);
    ar = l*b;
    pr = 2*(l+b);
    cr = 2*3.14*r;
    printf("\nArea of rectangle:%f\n",ar);
    printf("\nPerimeter of rectangle:%f\n",pr);
    printf("\nCircumference of circle:%f\n",cr);
    return 0;

    

}