#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int f=1;
    int i=1;
    for (i=1;i<=n;i++){
    f*=i;
    }
    printf("%d!=%d",n,f);
    return 0;
}