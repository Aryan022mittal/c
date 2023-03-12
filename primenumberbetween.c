#include<stdio.h>
int primefactors (int);
int main()
{
    int num;
    printf("\nEnter the number for prime factorisation:");
    scanf("%d",&num);
    primefactors(num);
    printf("\nPrime factor of %d are \n",num);
   
    return 0;
}
int primefactors(int num)
{
    int count;
      
      for ( count = 2; num > 1; count++)
      {
        while (num%count==0)
        {
            printf("%d\n",count);
            num=num/count;

        }
       
      }
      
      return(num);

}