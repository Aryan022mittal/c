#include<stdio.h>
int main()
{
    float bp,da,hra,grpay;
    printf("\nEnter Basic Salary Of aryan");
    scanf("%f",&bp);
    da = 0.4*bp;
    hra = 0.2*bp;
    grpay = bp + da + hra;
    printf("Basic salary of aryan = %f\n",bp);
    printf("Daerness Allowance = %f\n",da);
    printf("Gross pay of aryan is %f\n", grpay);
    return 0;
    }