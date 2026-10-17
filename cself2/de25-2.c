#include <stdio.h>
int main()
{
    int i;
    int n;
    double s=1.0;    
    scanf("%d",&n);
    double sum=0.0;
    for(i=1;i<=n;i++)
    {
        sum+=s/i;
        s=-s;
    }
    printf("%d,%.2f",n,sum);
return 0;
}