// BWOTSHECHB

#include <stdio.h>

int main() {
	int n , cnt = 0 ;
	scanf("%d" , &n) ;
	while ( n != 0 ) {
		if ( n % 10 == 7 || n % 10 == 4 )
			cnt ++ ;
		n /= 10 ;
	}
	if ( cnt == 4 || cnt == 7 )
		printf("Lucky Neighbour\n") ;
	else
		printf("Not a Lucky Neighbour\n") ;
	return 0 ;
}
