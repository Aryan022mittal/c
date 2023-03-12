#include<stdio.h>
int main()
{
    int year,basicyear=1990,leapyear,remainingyear,totaldays,days;
    printf("\nEnter the year :");
    scanf("%d",&year);
    year=(year-1)-basicyear;
    leapyear=year/4;
    remainingyear=year-leapyear;
    totaldays = (remainingyear*365) + (leapyear*366) +1;
    days=totaldays%7;
    if(days==0)
    printf("monday");
    else if (days==1)
    printf("tuesday");
    else if (days==2)
    printf("wednesday");
    else if (days==3)
    printf("thursday");
    else if (days==4)
    printf("friday");
    else if (days==5)
    printf("saturday");
    else if (days==6)
    printf("sunday");
    return 0;
}