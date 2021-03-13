// BWOTSHECHB

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
	srand(time(0)) ;
	double arr[2] ;
	for ( int i = 0 ; i < 2 ; i ++ )
		arr[i] = ((double)rand() / (double)RAND_MAX) * 20.0 , arr[i] += 5.0 ;
	double angle = ((double)rand() / (double)RAND_MAX) * (M_PI/2.0) ;
	double ans = sqrt((arr[0] * arr[0]) + (arr[1] * arr[1]) - 2.0 * (arr[0] * arr[1]) * cos(angle)) ;
	printf("AB = %lf , BC = %lf , B = %lf , AC = %lf\n" , arr[0] , arr[1] , angle , ans) ;
	return 0 ;
}
