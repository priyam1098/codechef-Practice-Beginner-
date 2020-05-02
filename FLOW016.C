#include <stdio.h>

unsigned long long int gcd(unsigned long long int A,unsigned long long int B)  
{  
    if (A == 0) 
        return B;  
    return gcd(B % A, A);  
}  
unsigned long long int lcm( unsigned long long int A, unsigned long long int B)  
{  
    return (A*B)/gcd(A,B);  
} 

int main()
{
    int T;
    unsigned long long int A,B;
    scanf("%d",&T);
    while(T--){
        scanf("%llu %llu",&A,&B);
        printf("%llu %llu\n",gcd(A,B),lcm(A,B));
    }
    return 0;
}
