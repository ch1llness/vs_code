#include <stdio.h>
int main()
{
    int isprime=1;
    int n,m;
    scanf("%d %d",&n,&m);
    int x=2;
    int sum1=0;
    for(x=2;x<=n;x++)
    {
        
        int i=2;
        for (i=2;i<x;i++)
        {
            int cnt=0;
            if (x%i==0){
                isprime=0;
            }
            if(isprime==1)
            {
                cnt++;
                sum1+=x;
            }
        }
    }
    int sum2=0;
    for(x=2;x<=m;x++)
    {
        int i=2;
        for (i=2;i<x;i++)
        {
            int cnt=0;
            if (x%i==0){
                isprime=0;
            }
            if(isprime==1)
            {
                cnt++;
                sum2+=x;
            }
        }
    }
    printf("%d",sum2-sum1);
    return 0;
}