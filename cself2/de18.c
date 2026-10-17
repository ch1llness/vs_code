#include <stdio.h>
int main()
{
    int number;
    int ci=0;
    int sum=0;
    scanf("%d",&number);
    while(number!=-1){
    sum+=number;
    ci++;
    scanf("%d",&number);
    }
    printf("%.1f",1.0*sum/ci);
    return 0;
}