#include<stdio.h>
int main()
{
    int arr[]={10,20,30,45,67,56,75};
    int i=4,*j,*k,*x,*y;
    j=&i;
    j=j+9;
    k=&i;
    k=k-3;
    x=&arr[1];
    y=&arr[5];
    printf("%d\n",y-x);
    j=&arr[4];
    k=arr+4;
    if (j==k)
    {
        printf("the two pointer is in same location");
    }
    else{
        printf("the two pointer is nopt in same location");
    }
    
   return 0;
}