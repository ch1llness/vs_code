#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int t=x-800;
    if(t<0){
        t+=2400;
    }
    printf("%d",t);
    return 0;
}
