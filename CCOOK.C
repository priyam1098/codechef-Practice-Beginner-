#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int A,B,C,D,E,sum=0;
        scanf("%d %d %d %d %d",&A,&B,&C,&D,&E);
        sum=A+B+C+D+E;
        if(sum==0){
            printf("Beginner\n");
        }
        else if(sum==1){
            printf("Junior Developer\n");
        }
        else if(sum==2){
            printf("Middle Developer\n");
        }
        else if(sum==3){
            printf("Senior Developer\n");
        }
        else if(sum==4){
            printf("Hacker\n");
        }
        else{
            printf("Jeff Dean\n");
        }
    }
    return 0;
}
