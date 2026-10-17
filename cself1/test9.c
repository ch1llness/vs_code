#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=a/100;
    int d=a%100;
    int h=c*60+d+b;
    int e=0;
    int f=0;
    e=h/60;
    f=h%60;
    if(f<10)
    {
        printf("%d0%d",e,f);
    }
    else{
        printf("%d%d",e,f);
    }
    return 0;
}