/*大于等于90分为A；
小于90且大于等于80为B；
小于80且大于等于70为C；
小于70且大于等于60为D；
小于60为E。*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=90){
        printf("A");
    }
    else if(n>=80&&n<90){
        printf("B");
    }
    else if(n>=70&&n<80){
        printf("C");
    }
    else if(n>=60&&n<70){
        printf("D");
    }
    else {
        printf("E");
    }
    return 0;
}