#include <stdio.h>
int main()
{
    int one,two,five;
    int x=0;
    scanf("%d",&x);
    int e=1;
    for (one=1;one<100;one++){
        for(two=1;two<100/2;two++){
            for(five=1;five<100/5;five++){
                if(one+two*2+five*5==x*10)
                    {
                    e=0;
                    printf("%d,%d,%d,%d",one,two,five,x);
                    goto out;
                    }
            }
        }  
    }
    out:     
return 0;
}