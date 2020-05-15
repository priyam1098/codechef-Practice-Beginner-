#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    while(T--){
        
        long int new=0,Num,Budget;
        scanf("%ld %ld",&Num,&Budget);
        
        while(Num--){
            
            long int Width,height,price,area;
             scanf("%ld %ld %ld",&Width,&height,&price);
            
            if(price<=Budget){              //Campare Budget
                area=Width*height;
                
                if(area>new){
                       new=area;
                }
            }
        }
        if(new!=0){
        printf("%ld\n",new);
        }
        else{
            printf("no tablet\n");
        }
    }

    return 0;
}
