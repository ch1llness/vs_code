#include <stdio.h>
int main()
{
    const int minor=20;
    int age=0;
    printf("请输入您的年龄；");
    scanf("%d",&age);
    printf("您的年龄为%d\n",age);
    if  (age>minor)  {
        printf("1\n");
    }
     printf("2\n");
return 0;
}