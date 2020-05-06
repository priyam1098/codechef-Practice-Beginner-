#include <stdio.h>

int main()
{
    int T,count=0;
    scanf("%d",&T);
    while(T--){
        unsigned long int A,B,sum,k;
        scanf("%lu %lu",&A,&B);
        sum=A+B;
        while(sum){
            k=sum%10;
            sum=sum/10;
            if(k==0){
                count=count+6;
            }
            else if(k==1){
                count=count+2;
            }
            else if(k==2){
                count=count+5;
            }
            else if(k==3){
                count=count+5;
            }
            else if(k==4){
                count=count+4;
            }
            else if(k==5){
                count=count+5;
            }
            else if(k==6){
                count=count+6;
            }
            else if(k==7){
                count=count+3;
            }
            else if(k==8){
                count=count+7;
            }
            else if(k==9){
                count=count+6;
            }
        }
        printf("%d\n",count);
        count=0;
    }
    return 0;
}
