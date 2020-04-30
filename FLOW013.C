#include <stdio.h>

int main()
{
    int T,i, A,B,C;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&A);
        scanf("%d",&B);
        scanf("%d",&C);
        if(A+B+C==180){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
    
