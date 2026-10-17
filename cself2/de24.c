#include <stdio.h>
int main()
{
    int one,two,five;
    int x=0;
    scanf("%d",&x);
    for (one=1;one<100;one++){
        for(two=1;two<100/2;two++){
            for(five=1;five<100/5;five++){
                if(one+two*2+five*5==x*10)
                    {
                    printf("%d,%d,%d,%d",one,two,five,x);
                    }
            }
        }   
    }     
return 0;
}