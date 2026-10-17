#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int sum1=0,sum2=0;
    int i=2;
    for (i=2;i<n;i++)
    {
        int isprime=1;
        if(n==1)
    {
        isprime=0;;
        break;
    }
        if(n%i==0)
        {
            break;
        }
        else{
            sum1+=i;
        }
    }
    for (i=2;i<m;i++)
    {
        int isprime=1;
        if(m==1)
    {
        isprime=0;;
        break;
    }
        if(m%i==0)
        {
            break;
        }
        else{
            sum2+=i;
        }    
    }
    int x=sum2-sum1;
    printf("%d",x);
    return 0;
}