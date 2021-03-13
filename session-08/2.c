// BWOTSHEWCHB

#include <stdio.h>

#define MAXN 369

int mat_A[MAXN][MAXN] , mat_B[MAXN][MAXN] , ans[MAXN][MAXN] ;

void mul(int n , int m , int p , int q) {
	static int row = 0 , col = 0 , it = 0 ;
	if ( row > n )
		return ;
	if ( col <= q ) {
		if ( it <= m )
			ans[row][col] += mat_A[row][it] * mat_B[it][col] , it ++ , mul(n , m , p , q) ;
		col ++ , it = 0 , mul(n , m , p , q) ;
	}
	row ++ , col = 0 , mul(n , m , p , q) ;
	return ;
}

int main() {
	int n , m , p , q ;
	scanf("%d%d%d%d" , &n , &m , &p , &q) ;
	for ( int i = 1 ; i <= n ; i ++ )
		for ( int j = 1 ; j <= m ; j ++ )
			scanf("%d" , &mat_A[i][j]) ;
	for ( int i = 1 ; i <= p ; i ++ )
		for ( int j = 1 ; j <= q ; j ++ )
			scanf("%d" , &mat_B[i][j]) ;
	if ( m != p )
		printf("Invalid Operation\n") ;
	else {
		/*for ( int i = 1 ; i <= n ; i ++ ) {
			for ( int j = 1 ; j <= q ; j ++ ) {
				for ( int k = 1 ; k <= p ; k ++ )
					ans[i][j] += mat_A[i][k] * mat_B[k][j] ;
				printf("%d " , ans[i][j]) ;
			}
			printf("\n") ;
		}*/
		mul(n , m , p , q) ;
		for ( int i = 1 ; i <= n ; i ++ ) {
			for ( int j = 1 ; j <= q ; j ++ )
				printf("%d " , ans[i][j]) ;
			printf("\n") ;
		}
	}
	return 0 ;
}
