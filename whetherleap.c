#include<stdio.h>
int leapyear(int);
int main()
{
    int yr;
    printf("\nEnter the yeaar to know whether leap or not:");
    scanf("%d",&yr);
    if (yr%4==0)
    {
        printf("this is leap year");
    }
    else{
        printf("this is not leap yera");
    }
    
    return 0;
}
