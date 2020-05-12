#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    while(T--){
        long int A,B,i;
        long int count=0,pre=0;
        scanf("%ld %ld",&A,&B);
        for(i=A;i<=B;i++){
            pre=i%10;
            if(pre==2 ||pre==3 ||pre==9){
                count++;
            }
            else{
                continue;
            }
        }
        printf("%ld\n",count);
    }

    return 0;
}
