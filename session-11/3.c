// BWOTSHEWCHB

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAXN 1000
#define DEBUG false

typedef struct {
	int ID ;
	int score ;
	char firstname[500] ;
	char lastname[500] ;
} Student ;

struct node {
	Student student ;
	struct node* prev ;
	struct node* next ;
} ;
typedef struct node NODE ;

NODE** head ;

FILE* input ;
FILE* output ;
char lines[MAXN][500] ;

void init() {
	head = (NODE**)malloc(sizeof(NODE*)) ;
	return ;
}

NODE* search(int ID) {
	NODE* cur = *head ;
	while ( cur != NULL ) {
		if ( cur->student.ID == ID )
			return cur ;
		cur = cur->next ;
	}
	return NULL ;
}

void append(Student User) {
	if ( search(User.ID) != NULL )
		return ;
	NODE* new = (NODE*)malloc(sizeof(NODE)) ;
	new->student = User ;	
	if ( *head != NULL ) {
		new->next = *head ;
		(*head)->prev = new ;
	}
	*head = new ;
	return ;
}

void delete(int ID) {
	NODE* cur = search(ID) ;
	if ( cur == *head )
		*head = cur->next ;
	if ( cur->prev != NULL )
		(cur->prev)->next = cur->next ;
	if ( cur->next != NULL )
		(cur->next)->prev = cur->prev ;
	free(cur) ;
}

void print(NODE* Entity) {
	if ( Entity != NULL )
		fprintf(output , "ID : %d / firstname : %s / lastname : %s / score : %d\n" , Entity->student.ID , Entity->student.firstname , Entity->student.lastname , Entity->student.score) ;
	return ;
}

void traverse() {
	int sum = 0 , count = 0 ;
	NODE* cur = *head ;
	while ( cur != NULL ) {
		print(cur) ;
		count ++ ;
		sum += cur->student.score ;
		cur = cur->next ;
	}
	fprintf(output , "Average : %lf\n" , (double)sum / (double) count) ;
	return ;
}

int str_int(char* str) {
	int ret = 0 ;
	for ( int i = 0 ; *str != '\0' && *str != '\n' ; i ++ )
		ret += *str - '0' , ret *= 10 , str ++ ;
	return ret / 10 ;
}

int main() {
	init() ;
	// Reads input from input.csv file and writes to output.txt !
	input = fopen("input.csv" , "r") ;
	output = fopen("output.txt" , "w") ;
	char* tok ;
	int it = 0 ;
	char buffer[500] ;
	while ( fgets(buffer , 500 , input) != NULL )
		strcpy(lines[it ++] , buffer) ;
	for ( int i = 1 ; i < it ; i ++ ) {
		Student New_User ;
		tok = strtok(lines[i] , ",") , New_User.ID = str_int(tok) ;
		tok = strtok(NULL , ",") , strcpy(New_User.firstname , tok) ;
		tok = strtok(NULL , ",") , strcpy(New_User.lastname , tok) ;
		tok = strtok(NULL , ",") , New_User.score = str_int(tok)  ;
		append(New_User) ;	
	}
	traverse() ; 
	fclose(input) ;
	fclose(output) ;
	return 0 ;
}
