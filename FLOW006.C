#include <stdio.h>

int main(void) {
    int n,sum=0,mod=0,k,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&k);
        while(k){
            mod=k%10;
            sum=sum+mod;
            k=k/10;
        }
        printf("%d\n",sum);
        sum=0;
    }
	return 0;
}

