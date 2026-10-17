#include <stdio.h>
void sum(int begin,int end){
int sum=0,i;
for (i=begin;i<=end;i++)
{
    sum+=i;
}
    printf("%d\n",sum);
}
int main()
{
    sum(1,10);
    sum(20,30);
    return 0;
}
