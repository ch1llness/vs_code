#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int f=1;
    int e=1;
    while(f<n)
    {
        e*=10;
        f++;
    }
    int i=e;
    while(i<e*10)
    {
        int t=i;
        int sum=0;
        do{
            int d=t%10;
            t/=10;
            int j=0;
            int k=1;
            while (j<n)
            {
                k*=d;
                j++;
            }
            sum+=k;
        }while(t>0);
        if(sum==i)
        printf("%d\n",i);
        i++;
    }
    return 0;
}