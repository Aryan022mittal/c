#include<stdio.h>
int top=-1;
void push(int a[20],int n)
{
    int x;
    if (top==n-1)
    {
        printf("\noverflow");
        return 0;
    }
    printf("\nEnter the data to be pushed:");
    scanf("%d",&x);
    a[++top]=x;
    
}
void pop(int a[20])
{
    int x;
    if (top==-1)
    {
        printf("\nunderflow");
        return;

    }
    x=a[top--];

}
void display(int a[20])
{
    int i;
    if (top==-1)
    {
        printf("\nNo element");
        return;
    }
    printf("\nthe elements of stack are:");
    for ( i = 0; i <= top; i++)
    {
        printf("\n%d",a[i]);
    }
}
int main()
{
    int stack[20],ch,n;
    printf("\nEnter the number of elements:");
    scanf("%d",&n);
    while (1)
    {
        printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\nENTER THE CHOICE:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:push(stack,n);
            break;
            case 2:pop(stack);
            break;
            case 3:display(stack);
            break;
            case 4:return;
            
        
        default:printf("\nwrong choice");
            break;
        }
    }
    
}