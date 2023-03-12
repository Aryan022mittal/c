#include<stdio.h>
int main()
{
    int num,tnum,digit,cnt=0,newnum;
    int rem;
    printf("\nEnter the number :");
    scanf("%d",&num);
    printf("\nEnter any digit to search :");
    scanf("%d",&digit);
    cnt=0;
    tnum=num;
    while(tnum>0){
        rem=tnum%100;
        if (rem%10==digit){
             cnt++;
        }
       
        tnum=tnum/10;
    }
    
    printf("\n Total number digit(%d) in number is ::%d\n",digit,cnt);
    
    return 0;
    
    
}