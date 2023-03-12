#include<stdio.h>
int main()
{
  int n,array[100],i,pos,element;
  printf("enter the size of array:");
  scanf("%d",&n);
  for ( i = 0; i < n; i++)
  {
      printf("\nenter the values :");
      scanf("%d",&array[i]);
  }
  printf("\nenter the position in which element is to be deleted:");
  scanf("%d",&pos);
  if (pos>=n+1)
  {
     printf("invalid search");
  }
  else
  {
    for ( i = pos-1; i < n-1; i++)
    {
        array[i]=array[i+1];
    }
    printf("array after deletion is :\n");
    for ( i = 0; i < n-1; i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
   }
} 
  