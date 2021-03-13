// BWOTSHEWCHB

#include <stdio.h>

#define MAXN (int)1e5

int arr[MAXN] ;

int main() {
	int n ;
	scanf("%d" , &n) ;
	for ( int i = 1 ; i <= n ; i ++ )
		scanf("%d" , &arr[i]) ;
	for ( int i = 1 ; i <= n ; i ++ )
		for ( int j = 1 ; j <= n - 1 ; j ++ )
			if ( arr[j] > arr[j + 1] ) {
				int temp = arr[j] ;
				arr[j] = arr[j + 1] ;
				arr[j + 1] = temp ;
			}
	for ( int i = 1 ; i <= n ; i ++ )
		printf("%d " , arr[i]) ;
	printf("\n") ;
}
