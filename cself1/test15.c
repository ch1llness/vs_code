/*起步里程为3公里，起步费10元；
超起步里程后10公里内，每公里2元；
超过10公里以上的部分加收50%的回空补贴费，即每公里3元；
营运过程中，因路阻及乘客要求临时停车的，按每5分钟2元计收（不足5分钟则不收费）n。*/
#include <stdio.h>
int main()
{
    double l;
    int t;
    scanf("%lf %d",&l,&t);
    int n=t/5*2;
    double j=0;
    double sum=0;
    if (l<=3){
        j=10;
    }
    else if(l>3&&l<=10){
        j=10+(l-3)*2;
    }
    else {
        j=24+(l-10)*3;
    }
    sum=n+j;
    int result=(int)(sum+0.5);
    printf("%d",result);
    return 0;
}