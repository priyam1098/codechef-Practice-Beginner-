#include <stdio.h>

int main()
{
    int T,N,Mod,rev=0;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        while(N){
            Mod=N%10;
            rev=rev*10+Mod;
            N/=10;
        }
        printf("%d\n",rev);
        rev=0;
    }
    return 0;
}
