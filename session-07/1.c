// BWOTSHEWCHB

#include <stdio.h>
#include <math.h>

int dig(int n) {
	int ans = 0 ;
	while ( n != 0 )
		n /= 10 , ans ++ ;
	return ans ;
}
int get(int n , int k) {
	int power = pow(10 , k) ;
	return n % power ;
}
int prime(int n) {
	if ( n == 1 )
		return 0 ;
	for ( int i = 2 ; i <= sqrt(n) ; i ++)
		if ( n % i == 0 )
			return 0 ;
	return 1 ;
}

int main() {
	int n ;
	scanf("%d" , &n) ;
	int flag = 1 ;
	for ( int i = 1 ; i <= dig(n) ; i ++ )
		if ( !prime(get(n , i)) )
			flag = 0 ;
	if ( flag )
		printf("Super Prime\n") ;
	else
		printf("Not a Super Prime\n") ;
	return 0 ;
}
