#include <stdio.h>
int main()
{
    int n;
    int i=1;
    scanf("%d",&n);
    printf("%d",i);
    for (i=1;i<=n;i+=2)
    {
        printf(" %d",i);
    }
    return 0;
}