#include<stdio.h>
int main(){
    int T;
    
    scanf("%d",&T);
    while(T--){
        int count=0,count1=0,count2=0;
        int n,i;
        scanf("%ld",&n);
        char arr[n];
        scanf("%s",&arr);
        for(i=0;i<n;i++){
           if(arr[i]!='I'){
              count++;
           }
           if(arr[i]=='N'){
               count1++;
           }
        }
        if(count==n){
	       if(count1==n)
	       {
	          printf("NOT SURE\n"); 
	       }
	       else{
	           printf("NOT INDIAN\n");
	       }
	    }
	    else if(count<n){
	       printf("INDIAN\n");
	   
    	}
    }
    return 0;
        
}
