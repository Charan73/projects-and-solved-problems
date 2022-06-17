#include <stdio.h>
#include<stdlib.h>
#include<math.h>


int main() {
   int number,guess,nguesses=1;
   srand(time(0));
   number=rand()%100+1;
   do
   {
       printf("guess the number between 1 to 100   ");
       scanf("%d",&guess);
       if(guess>number){
           printf("lower the number \n");
           
       }
       else if(guess<number){
           printf("greater the number\n ");
           
       }
       else {
           printf("you are a bad mofo you got it in %d",nguesses);
           
       }nguesses++;
           
       }while(guess!=number);
   
   
   return 0;
}
