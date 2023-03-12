#include<stdio.h>
int main()
{
    int i, w = 841, h = 1189, k;
    for(i=0; i<9; i++)
    {
        printf("\n A%d: %d * %d", i, w, h);
        k = h;
        h = w;
        w = k/2;
    }
    return 0;
}