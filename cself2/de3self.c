#include <stdio.h>
int main()
{
    int price=0;
    int change=0;
    printf("请输入您的金额；");
    scanf("%d",&price);
    change=100-price;
    printf("找您%d元",change);
    return 0;
}