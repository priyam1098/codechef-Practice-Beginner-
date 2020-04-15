#include <stdio.h>

int main(void) {
    int n,i,k;
    int a[]={2010,2015,2016,2017,2019};
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&k);
        if(k==a[0]){
            printf("HOSTED\n");
        }
        else if(k==a[1]){
            printf("HOSTED\n");
        }
        else if(k==a[2]){
            printf("HOSTED\n");
        }
        else if(k==a[3]){
            printf("HOSTED\n");
        }
        else if(k==a[4]){
            printf("HOSTED\n");
        }
        else{
            printf("NOT HOSTED\n");
        }
        
    }
	return 0;
}

