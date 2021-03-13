// BWOTSHEWCHB

#include <stdio.h>
#include <math.h>

int main() {
	int l1 , r1 , l2 , r2 , l3 , r3 ;
	scanf("%d %d %d %d %d %d" , &l1 , &r1 , &l2 , &r2 , &l3 , &r3) ;
	int L = fmax(l1 , fmax(l2 , l3)) , R = fmin(r1 , fmin(r2 , r3)) ;
	if ( L > R )
		printf("No intersection\n") ;
	else
		printf("%d %d\n" , L , R) ;
	return 0 ;
}
