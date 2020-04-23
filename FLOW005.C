#include<stdio.h>
int main(){
    int N,n,sum=0,i;
    scanf("%d",&N);
    for(i=0;i<N;i++){
     scanf("%d",&n);
	 while(n>0){
	 if(n>=100){
	 sum=sum+(n/100);
	 n=n%100;
	 }
	 else if(n>=50){
	 sum=sum+(n/50);
	 n=n%50;
	 }
	 else if(n>=10){
	 sum=sum+(n/10);
	 n=n%10;
	 }
	 else if(n>=5){
	 sum=sum+(n/5);
	 n=n%5;
	 }
	 else if(n>=2){
	 sum=sum+(n/2);
	 n=n%2;
	 }
	 else if(n>=1){
	 sum=sum+(n/1);
	 n=n%1;
	 }
}
   printf("%d\n",sum);
   sum=0;
    }

	return 0;

}
        
        

