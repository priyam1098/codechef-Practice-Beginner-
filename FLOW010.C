#include <stdio.h>

int main()                                      
{
   int T,i=0,j;
   char ID;
   scanf("%d",&T);
   for(j=0;j<T;j++){
       scanf(" %c",&ID);
       if(ID=='B'||ID=='b'){
           printf("BattleShip\n");
       }
       else if(ID=='C'||ID=='c'){
           printf("Cruiser\n");
       }
       else if(ID=='D'||ID=='d'){
           printf("Destroyer\n");
       }
       else if(ID=='F'||ID=='f'){
           printf("Frigate\n");
       }
     
       
   }

return 0;
}
   
