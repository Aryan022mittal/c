#include <stdio.h>
int factor(int i)
{
    int sum = 0;
    for (int j = 1; j < i; j++)
    {
        if (i % j == 0)
        {
            sum += j;
        }
    }
    return sum;
}
int main()
{
    int x;
    printf("enter the number ");
    scanf("%d", &x);

    printf("sum of factors is %d", factor(x));
    return 0;
}