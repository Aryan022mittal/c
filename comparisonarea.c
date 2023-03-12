#include<stdio.h>
int main()
{
    float l,b,ar,pr;
    printf("\nEnter the length :");
    scanf("%f",&l);
     printf("\nEnter the breadth :");
    scanf("%f",&b);
    ar=l*b;
    pr=2*(l+b);
    printf("\narea of ractancle : %f\n",ar);
    printf("\nperimeter of ractancle : %f\n",pr);
    if (ar>pr)
    {
        printf("\narea is greater than perimeter");
    }
    else{
        printf("\n perimeter is greater than area ");
    }
    return 0;

}