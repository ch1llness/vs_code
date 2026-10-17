#include <stdio.h>
int main()
{
    double x;
    scanf("%lf",&x);
    double y;
    if (x<=15)
    {
        y=4.00*x/3;
    }
    else {
        y=2.50*x-17.5;
    }
    printf("%.2f",y);
    return 0;
}