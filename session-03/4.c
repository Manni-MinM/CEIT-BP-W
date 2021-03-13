// BWOTSHEWCHB

#include <stdio.h>
#include <math.h>

float arr[7] ;

int main() {
	for ( int i = 1 ; i <= 6 ; i ++ )
		scanf("%f" , &arr[i]) ;
	for ( int i = 1 ; i <= 2 ; i ++ ) {
		for ( int j = 1 ; j <= 3 ; j ++ )
			printf("%6.3f    " , arr[(i - 1) * 3 + j]) ;
		printf("\n") ;
	}
}
