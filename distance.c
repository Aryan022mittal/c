#include<stdio.h>
int main()
{
    float km,m,cm,inch,ft;
    printf("\nEnter the distance in kilometers");
    scanf("%f",&km);
    m = km*1000;
    cm = m*100;
    inch = cm/2.54;
    ft = inch/12;
    printf("\nDistance in Meter = %f\n",m);
    printf("\ndistance in centimeters = %f\n",cm);
    printf("\nDistance in inches = %f\n",inch);
    printf("\nDistance in feet = %f\n",ft);
    return 0;
    }