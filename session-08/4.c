// BWOTSHEWCHB

#include <stdio.h>
#include <string.h>

#define MAXN 3069

char str[MAXN] , key[MAXN] , query[MAXN] , ans[MAXN] , temp[MAXN] ;

void clear() {
	for ( int i = 0 ; i < MAXN ; i ++ )
		temp[i] = '\0' ;
	return ;
}
int main() {
	gets(str) ;
	gets(key) ;
	gets(query) ;
	int it = 0 , ans_it = 0 ;
	for ( int i = 0 ; i < strlen(str) ; i ++ ) {
		for ( int k = 0 ; k < strlen(key) && k < strlen(str) ; k ++ )
			temp[it ++] = str[i + k] ;
		if ( strcmp(temp , key) )
			ans[ans_it ++] = str[i] ;
		else {
			for ( int j = 0 ; j < strlen(query) ; j ++ )
				ans[ans_it ++] = query[j] ;
			i += strlen(key) - 1 ;
		}
		clear() , it = 0 ;
	}
	printf("%s\n" , ans) ;
	return 0 ;
}
