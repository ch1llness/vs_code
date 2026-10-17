#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int number = rand()%100+1;
    int count=0;
    int a=0;
    do{
        printf("输入:");
        scanf("%d",&a);
        count++;
        if (a>number)
        printf("大\n");
        if (a<number)
        printf("小\n");
    }  while (a!=number);
    printf("你花了%d次答对,答案是%d",count,a);
    return 0;
}