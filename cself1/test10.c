#include <stdio.h>
int main()
{
    int d;
    scanf("%d",&d);
    int x;
    x=d+2;
    if (x<=7)
    {
        printf("%d",x);
    }
    else 
    {
        x-=7;
        printf("%d",x);
    }
    return 0;
}