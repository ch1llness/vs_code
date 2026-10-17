#include <stdio.h>
int main()
{
    int x;
    int i;
    int isprime=1;
    scanf("%d",&x);
    for (i=2;i<x;i++){
        if (x%i==0){
            isprime=0;
            continue;
        }
        printf("%d\n",i);
    }
    if (isprime==0){
        printf("不是素数");
    }
    else {
        printf("是素数");
    }
    return 0;
}