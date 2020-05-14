#include <stdio.h>
int main() {
	int T;
	scanf("%d", &T);
	while(T--) {
	    int A;
	    scanf("%d", &A);
	    double loss = 0;
	    while(A--) {
	        double price, quan, disc, raise_pri;
	        scanf("%lf %lf %lf", &price, &quan, &disc);
	        raise_pri = price + (price * (disc / 100));
	        raise_pri -= (raise_pri * (disc / 100));  
	        loss=loss+(price - raise_pri) * quan; 
	    }
	    printf("%lf\n", loss);
	}
	return 0;
}
