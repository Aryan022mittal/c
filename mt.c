#include<stdio.h>
int main()
{
    int ar1[4],ar2[4],i,sum=0,avg,perimeter[4],area[4];
    for ( i = 0; i <4; i++)
    {
        printf("\nEnter the length and breadth of rectancle:");
        scanf("%d %d",&ar1[i],&ar2[i]);
    }
    for ( i = 0; i < 4; i++)
    {
        perimeter[i]=2*(ar1[i]+ar2[i]);
        area[i]=ar1[i]*ar2[i];
        if (area[i]>perimeter[i])
        {
            printf("\nthis array has mor area than p %d",i);
        }
    }
    for ( i = 0; i < 4; i++)
    {
        area[i]=ar1[i]*ar2[i];
        sum=sum+area[i];
    }
        
        printf("\nsum of area is %d",sum);
        avg=sum/4;
        printf("\navg of this is %d",avg);

    
    
    return 0;
    
    
}