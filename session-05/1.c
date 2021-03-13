// BWOTSHECHB

#include <stdio.h>
#include <math.h>

int main() {
	double sinx , cosx ;
	char signcos ;
	scanf("%lf %c" , &sinx , &signcos) ;
	if ( sinx > 1 || sinx < -1 || (signcos != '-' && signcos != '+') )
		printf("Invalid Input\n") ;
	else {
		cosx = sqrt(1.0 - sinx * sinx) ;
		if ( signcos == '-' )
			cosx *= -1.0 ;
		printf("cos(x) = %lf\n" , cosx) ;
		if ( sinx >= 0 && cosx >= 0 )
			printf("Quarter 1\n") ;
		else if ( sinx >= 0 && cosx <= 0 )
			printf("Quarter 2\n") ;
		else if ( sinx <= 0 && cosx <= 0 )
			printf("Quarter 3\n") ;
		else
			printf("Quarter 4\n") ;
	}
	return 0 ;
}
