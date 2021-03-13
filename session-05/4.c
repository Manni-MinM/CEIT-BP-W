// BWOTSHECHB

#include <stdio.h>
#include <stdbool.h>

int main() {
	printf("true = %d\tfalse = %d\n", true, false) ;
	if ( 3 * 4 )
		printf ("Result of 3 * 4 is: %d\n", 3 * 4) ;
	if ( 3 * 4 == 12 )
		printf ("Result of 3 * 4 == 12 is: %d\n", 3 * 4 == 12) ;
	if ( 'b' )
		printf ("ASCII code of 'b' is: %d\n", 'b') ;
	if ( ' ' )
		printf ("What is space ASCII code?\n") ;
	if ( '\0' )
		printf ("****the ASCII code of \0 is 0****\n") ;
	printf ("You will learn more about \0 in \"String\". BOOOM!") ;

	// Part-2 
	int a = 5 ;
	int b = 0 ;
	int c = printf("Condition\n") ;
	
	if ( a && b || c )
		printf("Line 1 - %d is true\n" , c) ;
	else
		printf("Line 1 - Condition is not true\n") ;
	if ( printf("") && printf("I am true") )
		printf("Line 2 - Condition is true\n") ;
	return 0 ;
}
