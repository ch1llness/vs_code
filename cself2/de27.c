#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int min=0;
    if(a>b){
        min=b;
    }
    else {min=a;}
    int i;
    int t=1;
    int ret;
    for (i=1;i<=min;i++)
    {
        if (a%i==0)
            if(b%i==0){
                ret=i;
            }
    }
    printf("%d",ret);
    return 0;
}