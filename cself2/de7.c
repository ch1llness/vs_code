#include <stdio.h>
int main()
{
    double foot;
    double inch;
    scanf("%lf,%lf",&foot,&inch);
    double height=(foot+inch/12)*3;
    printf("您的身高为%lf",height);
    return 0;
}