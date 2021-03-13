// BWOTSHECHB

#include <stdio.h>

float x = 0.3 , sum[11] ;

int main() {
	for ( int i = 1 ; i <= 10 ; i ++ )
		sum[i] = sum[i - 1] + x , printf("Sum = %.30f / Diff = %.30f\n" , sum[i] , sum[i] - sum[i - 1]) ;
	printf("\nSum = using addition %.30f \nSum = using multiplication %.30f\n" , sum[10] , x * 10.0) ;
	return 0 ;
}
