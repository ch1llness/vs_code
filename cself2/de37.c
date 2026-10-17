#include <stdio.h>
#include <math.h>
int isprime(int a)
{
    if (a<2)
    {
        return 0;
    }
    int i=2;
    for (;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int sum(int n){
    if (n<=0) return 0;
    int cnt =1,sum=0;
    for(int j=2;cnt<=n;j++)
    {
        if (isprime(j))
        {
            cnt++;
            sum+=j;
        }
    }   
    return sum;
}
int main()
{
    int m,n,x;
    scanf("%d %d",&n,&m);
    x=sum(m)-sum(n-1);
    printf("%d",x);
    return 0;
}
