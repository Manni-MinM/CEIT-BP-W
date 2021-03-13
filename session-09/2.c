// BWOTSHEWCHB

#include <stdio.h>
#include <string.h>

#define MAXN 300069

char str[MAXN] , rts[MAXN] ;

int main() {
	gets(str) ;
	gets(rts) ;
	char *pstr = str , *prts = rts ;
	int flag = (strlen(str) == strlen(rts) ? 1 : 0) ;
	while ( *pstr != '\0' && *prts != '\0' ) {
		if ( *pstr != *prts )
			flag = 0 ;
		pstr ++ , prts ++ ;
	}
	if ( flag )
		printf("Equal\n") ;
	else
		printf("different\n") ;
	return 0 ;
}
