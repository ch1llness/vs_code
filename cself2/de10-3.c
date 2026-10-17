#include <stdio.h>
int main()
{
    int hour1,min1;
    int hour2,min2;
    scanf("%d %d",&hour1,&min1);
    scanf("%d %d",&hour2,&min2);
    int hour=hour2-hour1;
    int min=min2-min1;
    if (min<0) {
        min+=60;
    }
    printf("Äú»¹Ê£%dÊ±%d·ÖÖÓ",hour--,min);
    printf("%d",hour);
    return 0;
}

