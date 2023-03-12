#include<stdio.h>
int main()
{
    int n[6]={2,5,7,8,9,1};
    int max=n [0];
    for (int i=1;i<6 ; i++)
    {
        if (max<n[i])
        {
            max=n[i];
        }
        
    }
    printf("\nThe largest number is :%d",max);
    return 0;

}