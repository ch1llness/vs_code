#include <stdio.h>
int main()
{
    int x=0;
    printf("«Î ‰»Î");
    scanf("%d",&x);
    if (x<0){
        printf("%d",-1);
    }else if(x==0){
        printf("%d",0);
    }else {
        printf("%d",x*2);
    }
    return 0;
}