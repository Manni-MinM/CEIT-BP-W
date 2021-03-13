// BWOTSHEWCHB

#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAXK 548
#define MAXN 300069

char str_input[MAXN] , norm_str[MAXN] , encoded[MAXN] , decoded[MAXN] , square[MAXK][MAXK] ;

char* normalize(char* str) {
	char* ptr_str = str ;
	char* ptr_norm = norm_str ;
	while ( *ptr_str != '\0' ) {
		if ( (*ptr_str >= 'a' && *ptr_str <= 'z') || 
		(*ptr_str >= 'A' && *ptr_str <= 'Z') || (*ptr_str >= '0' && *ptr_str <= '9') )
			*ptr_norm = *ptr_str , ptr_norm ++ ;
		ptr_str ++ ;
	}
	return norm_str ;
}

char* encode(char const* str) {
	for ( int i = 0 ; i < MAXK ; i ++ )
		for ( int j = 0 ; j < MAXK ; j ++ )
			square[i][j] = '\0' ;
	char* ptr = (char*)str ;
	int len = strlen(str) , row = floor(sqrt(len)) , col = len / row + (len % row ? 1 : 0) ;
	for ( int i = 0 ; i < row ; i ++ )
		for ( int j = 0 ; j < col ; j ++ ) {
			if ( *ptr == '\0' )
				break ;
			square[i][j] = *ptr ;
			ptr ++ ;
		}
	char* ptr_enc = encoded ;
	for ( int i = 0 ; i < col ; i ++ ) {
		for ( int j = 0 ; j < row ; j ++ )
			if ( square[j][i] != '\0' )
				*ptr_enc = square[j][i] , ptr_enc ++ ;
			else
				*ptr_enc = ' ' , ptr_enc ++ ;
		*ptr_enc = '!' , ptr_enc ++ ;
	}
	return (char*)encoded ;
}
char* decode(char const* str) {
	for ( int i = 0 ; i < MAXK ; i ++ )
		for ( int j = 0 ; j < MAXK ; j ++ )
			square[i][j] = '\0' ;
	char* ptr = (char*)str ;
	int it = 0 , jt = 0 ;
	while ( *ptr != '\0' ) {
		if ( *ptr != '!' )
			square[it][jt] = *ptr , jt ++ ;
		else
			it ++ , jt = 0 ;
		ptr ++ ;
	}
	char* ptr_dec = decoded ;
	for ( int j = 0 ; j <= jt ; j ++ ) {
		for ( int i = 0 ; i <= it ; i ++ )
			printf("%c" , square[i][j]) ;
		printf("\n") ;
	}
	for ( int j = 0 ; j <= jt ; j ++ )
		for ( int i = 0 ; i <= it ; i ++ )
			if ( square[i][j] != '\0' )
				*ptr_dec = square[i][j] , ptr_dec ++ ;
	return (char*)decoded ;
}

int main() {
	int t ; char c ;
	printf("Enter 1 for Encoding and 0 for Decoding\n") ;
	scanf("%d" , &t) ; scanf("%c" , &c) ;
	printf("Enter input string\n") ;
	gets(str_input) ;
	if ( t )
		puts(encode(normalize(str_input))) ;
	else
		puts(decode(str_input)) ;
	return 0 ;
}
