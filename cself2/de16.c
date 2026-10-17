#include <stdio.h>
int main()
{
    int x;
    int n=0;
    printf("num");
    scanf("%d",&x);
    do{
        x/=10;
        n++;
    } while(x>0);
    printf("n%d",n);
    return 0;
}