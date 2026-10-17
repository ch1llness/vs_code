#include <stdio.h>
int main()
{
    int a;
    printf("ÇëÊäÈëÄúµÄÊı×Ö£º");
    scanf("%d",&a);
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    b=a/100;
    c=a/10-b*10;
    d=a-100*b-10*c;
    e=d*100+c*10+b;
    printf("%d",e);
    return 0;
}