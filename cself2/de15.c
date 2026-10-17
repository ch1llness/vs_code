#include <stdio.h>
int main()
{
    int x;
    int n=0;
    printf("Êý×Ö");
    scanf("%d",&x);
    n++;
    while (x/10>0){
    n++;
    x/=10;}
    printf("%d",n);
    return 0;
}