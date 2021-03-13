// BWOTSHECHB

#include <stdio.h>

double x[5] , y[5] ;

int main() {
	int cnt = 0 , flag = 0 ;
	for ( int i = 1 ; i <= 4 ; i ++ )
		scanf("%lf %lf" , &x[i] , &y[i]) ;
	for ( int i = 1 ; i <= 4 ; i ++ )
		for ( int j = i + 1 ; j <= 4 ; j ++ )
			for ( int k = j + 1 ; k <= 4 ; k ++ )
				if ( (y[j] - y[i]) * (x[k] - x[j]) == (y[k] - y[j]) * (x[j] - x[i]) )
					cnt ++ ;
	for ( int i = 1 ; i <= 4 ; i ++ )
		for ( int j = 1 ; j <= 4 ; j ++ )
			for ( int k = 1 ; k <= 4 ; k ++ )
				for ( int t = 1 ; t <= 4 ; t ++ ) {
					if ( i == j || i == k || i == t || j == k || j == t || k == t )
						break ;
					printf("%d %d %d %d\n" , i , j , k , t) ;
					int cur = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) ;
					if ( cur != (x[j] - x[k]) * (x[j] - x[k]) + (y[j] - y[k]) * (y[j] - y[k]) )
						break ;
					if ( cur != (x[k] - x[t]) * (x[k] - x[t]) + (y[k] - y[t]) * (y[k] - y[t]) )
						break ;
					if ( cur != (x[t] - x[i]) * (x[t] - x[i]) + (y[t] - y[i]) * (y[t] - y[i]) )
						break ;
					flag = 1 ;
				}
	if ( cnt == 4 )
		printf("All in one line\n") ;
	else if ( cnt == 1 )
		printf("Three in one line\n") ;
	else if ( flag )
		printf("Diamond\n") ;
	else
		printf("Nothing\n") ;
	return 0 ;
}
