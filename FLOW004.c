#include<string.h>
#include<stdio.h>
 int main()
{
    int N,i,l; 
    scanf("%d",&N);
	char a[1000000];
	for(i=0;i<N;i++){
    while(N--)
    	{
    		scanf("%s",&a);
    		l=strlen(a);
    		printf("%d\n",(a[0]-'0' + a[l-1] - '0')); //0 ASCII CODE= 48
	  	}
	}
	return 0;
}
