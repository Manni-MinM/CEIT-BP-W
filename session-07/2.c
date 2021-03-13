// BWOTSHEWCHB

#include <stdio.h>

#define MAXN 300069

long int fibo[MAXN] ;

long int fib(int n) {
	if ( n == 0 )
		return 0 ;
	if ( n == 1 )
		return 1 ;
	return fib(n - 1) + fib(n - 2) ;
}

int main() {
	int n ;
	scanf("%d" , &n) ;
	fibo[0] = 0 , fibo[1] = 1 ;
	for ( int i = 2 ; i <= n ; i ++ )
		fibo[i] = fibo[i - 1] + fibo[i - 2] ;
	printf("recursive : %ld\n" , fib(n)) ;
	printf("loop : %ld\n" , fibo[n]) ;
	return 0 ;
}
