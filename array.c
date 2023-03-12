#include<stdio.h>
int main()
{
  
  int i,n,array[45];
  printf("size of array should be:");
  scanf("%d",&n);
  for ( i = 0; i < n; i++)
  {
    printf("\nenter the number in array:");
    scanf("%d",&array[i]);
  }
  for ( i = 0; i <n; i++)
  {
    printf("adress of array of elements%d is :%d\n", array[i], &array[i]);
  }
  return 0;

}