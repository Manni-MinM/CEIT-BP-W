// BWOTSHEWCHB

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 300069

int map[256] ;
char str[MAXN] ;

int main() {
	gets(str) ;
	for ( int i = 0 ; i < strlen(str) ; i ++ )
		map[(int)str[i]] ++ ;
	int index_MAX = 0 ;
	for ( int i = 0 ; i < 256 ; i ++ )
		if ( map[i] >= map[index_MAX] )
			index_MAX = i ;
	char ans = index_MAX ;
	printf("%c\n" , ans) ;
	return 0 ;
}
