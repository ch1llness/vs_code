#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int f=1;
    int i=n;
/*   for (n=n;n>1;n--){
    f*=n;
    }*/
    for (;n>1;n--){
    f*=n;
    }
    printf("%d!=%d",i,f);
    return 0;
}