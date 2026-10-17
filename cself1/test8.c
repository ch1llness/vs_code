#include <stdio.h>
int main()
{
    int math,eng,comp;
    scanf("%d %d %d",&math,&eng,&comp);
    int average=(math+eng+comp)/3;
    printf("math = %d, eng = %d, comp = %d, average = %d",math,eng,comp,average);
    return 0;
}