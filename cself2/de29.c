#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    for (i=1;i<=n;i++)
    {
        int j=1;
        for (j=1;j<=i;j++)
        {
            printf("%d*%d=%d",j,i,j*i);
            if (j*i>=10){
                printf("  ");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}