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
  printf("\nenter the position in which element is to be added:");
  scanf("%d",&pos);
  printf("\nenter the number that is to be added in that position:");
  scanf("%d",&element);
  if (pos>n)
  {
    printf("invalid search");
  }
  else{
    for ( i = n-1; i >= pos; i--)
    {
        array[i+1]=array[i];
        array[pos-1]=element;
    }
    printf("array after insertion is :\n");
    for ( i = 0; i <= n; i++)
    {
        printf("%d\n",array[i]);
    }
    
    return 0;

  }
  
  
}