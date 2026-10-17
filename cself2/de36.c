#include <stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf,%lf",&a,&b);
    c=a/b;
    printf("%.1f\n",c);
    const double e=3.785,f=1.609;
    double d=e*100/(c*f);
    printf("%f",d);
    return 0;
}