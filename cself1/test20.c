#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(0));
    int number=rand()%100+1;
    int n=0,N=0;
    scanf("%n",&N);
    int cut=0;
    do{
        scanf("%d",&n);
        if (n<number&&n>0)
        {
            printf("Too small");
        }
        else if(n>number){
            printf("Too big");
        }
        else if(n<=0){
            printf("Game Over");
        }
        cut++;
    } while (n!=number);
    if (cut==1){
        printf("Bingo!");
    }
    else if(cut<=3){
        printf("Lucky You!");
    }
    else if(cut>3&&cut<=N){
            printf("Good Guess!");
    }
    else{
        printf("Game Over");
    }
    return 0;
}
