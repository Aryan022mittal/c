#include<stdio.h>
int main()
{
    int arr1[3][5]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
    };
    int arr2[5][3];
    int i,j;
    for ( i = 0; i <=2; i++)
    {
       for ( j = 0; j <= 4; j++)
       {
          arr2[j][i]=arr1[i][j];
       }
    }
    for ( i = 0; i <= 4; i++)
    {
        for ( j = 0; j <= 2; j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}