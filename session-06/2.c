// BWOTSHECHB

#include <stdio.h>

int main() {
	int n ;
	scanf("%d" , &n) ;
	double ans = 0 ;
	for ( int i = 1 ; i <= (1 << n) ; i ++ )
		ans += 1.0 / i ;
	printf("%lf\n" , ans) ;
	return 0 ;
}
