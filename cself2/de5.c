#include <stdio.h>
int main()
{
    int price=0;
    int amount=0;
    printf("请输入您的金额");
    scanf("%d",&price);
    printf("请输入票面");
    scanf("%d",&amount);
    int change=amount-price;
    printf("找您%d元",change);
    return 0;
}