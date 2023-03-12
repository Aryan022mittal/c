#include<stdio.h>
int main()
{
    float cp,sp,profit,loss;
    printf("\nEnter the cost price : ");
    scanf("%f",&cp);
    printf("\nEnter the selling price :");
    scanf("%f",&sp);
    if(sp>cp)
    {
        profit=sp-cp;
        printf("\n profit of item is :%f\n",profit);
    }
    else if(cp>sp)
    {
        loss=cp-sp;
        printf("\nLoss of item is :%f\n",loss);
    }
    else
    {
       printf("\nwe dont get on profit or loss in this item");
    }
    return 0;
}