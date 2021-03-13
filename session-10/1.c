// BWOTSHEWCHB

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAXN 3069
#define DEBUG false

typedef struct {
	int ID ;
	int Age ;
	char Name[100] ;
	char Address[100] ;
} Student ;

Student students[MAXN] ;

int main() {
	int n = 15 ;
	for ( int i = 0 ; i < n ; i ++ ) {
		printf("Name : ") ;
		gets(students[i].Name) ;
		printf("ID : ") ;
		scanf("%d" , &students[i].ID) ;
		printf("Age : ") ;
		scanf("%d" , &students[i].Age) ;
		getchar() ;
		printf("Address : ") ;
		gets(students[i].Address) ;
	}
	for ( int i = 0 ; i < n ; i ++ )
		printf("Name : %s\t ID : %d\t Age : %d\t Address : %s\n" , students[i].Name , students[i].ID , students[i].Age , students[i].Address) ;
	return 0 ;
}
