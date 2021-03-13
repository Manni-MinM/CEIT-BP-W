// BWOTSHEWCHB

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAXN 3069
#define DEBUG false

typedef struct {
	int ID ;
	int Age ;
	double Score ;
	char Name[100] ;
	char Address[100] ;
} Student ;
typedef struct {
	double Class_Avg ;
	Student Class_Students[MAXN] ;
} Class ;

Class BP ;

double get_average(int n , Class class) {
	double sum = 0 ;
	for ( int i = 0 ; i < n ; i ++ )
		sum += class.Class_Students[i].Score ;
	return sum / n ;
}

int main() {
	int n = 15 ;
	for ( int i = 0 ; i < n ; i ++ ) {
		printf("Name : ") ;
		gets(BP.Class_Students[i].Name) ;
		printf("ID : ") ;
		scanf("%d" , &BP.Class_Students[i].ID) ;
		printf("Age : ") ;
		scanf("%d" , &BP.Class_Students[i].Age) ;
		printf("Score in BP : ") ;
		scanf("%lf" , &BP.Class_Students[i].Score) ;
		getchar() ;
		printf("Address : ") ;
		gets(BP.Class_Students[i].Address) ;
	}
	BP.Class_Avg = get_average(n , BP) ;
	printf("%lf\n" , BP.Class_Avg) ;
	for ( int i = 0 ; i < n ; i ++ )
		printf("Name : %s\t ID : %d\t Age : %d\t Address : %s\n" , BP.Class_Students[i].Name , BP.Class_Students[i].ID , BP.Class_Students[i].Age , BP.Class_Students[i].Address) ;
	return 0 ;
}
