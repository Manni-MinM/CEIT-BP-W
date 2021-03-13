// BWOTSHECHB

#include <stdio.h>

int main() {
	int n ;
	scanf("%d" , &n) ;
	for ( int i = 1 ; i <= n ; i ++ ) {
		for ( int j = 1 ; j <= i ; j ++ )
			printf("* ") ;
		printf("\n") ;
	}
	for ( int i = 1 ; i <= n ; i ++ ) {
                for ( int j = 1 ; j <= i ; j ++ )
                        printf("%c " , 64 + i) ;
                printf("\n") ;
        }
	for ( int i = 1 ; i <= n ; i ++ ) {
                for ( int j = 1 ; j <= n ; j ++ )
                        if ( j > i )
				printf(" ") ;
			else
				printf("%d" , j) ;
		for ( int j = n - 1 ; j >= 1 ; j -- )
			if ( j > i )
				printf(" ") ;
			else
				printf("%d" , j) ;
                printf("\n") ;
        }
	return 0 ;
}
