#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int snakegame (char you,char comp)
{
    if(you==comp){
        return 0;
    }
    else if((you=='s'&&comp=='w')||(you=='w'&&comp=='g')||(you=='g'&&comp=='s')){
        return 1;
    }
}
int main()
{
    char you,comp;
    srand(time(0));
    int number =rand()%100+1;
    if(number<33)
    {
        comp='s';
    }
    else if(number<66)
    {
        comp='w';
    }
    else{
        comp='g';
    }
    
    printf("enter 's'  snake and 'w' for water and g for gun\n");
    scanf("%c",&you);
    int result=snakegame(you,comp);
    if(result==0){
        printf("game draw\n");
    
    }
    else if(result==1){
        printf("you win\n");
    }
    else{
        printf("you lost\n");
    }
    printf("you choose %c and the computer choose %c",you,comp);
    

    return 0;
}
