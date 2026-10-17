#include <stdio.h>
int main()
{
    int x=2;
        while (x<100)
    {
    int i;
    int isprime=1;

        for (i=2;i<x;i++)
        {
            if (x%i==0)
            {
                isprime=0;
                break;
            }
        }
        if (isprime==1)
        {
            printf("%d ",x);
        }
    x++;
    }
    return 0;
}