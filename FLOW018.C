#include <stdio.h>

int main(void) {
	int T;
	scanf("%d", &T);
	while(T--) {
	    int N;
	    unsigned long long fact = 1;
	    scanf("%d", &N);
	    for(int i = 1; i <= N; i++)
	        fact=fact* i;             
	    printf("%llu\n", fact);
	}
	return 0;
}
