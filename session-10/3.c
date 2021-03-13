// BWOTSHEWCHB

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXN 300
#define DEBUG false

typedef struct {
	int ID ;
	int Age ;
	double Score ;
	char Name[MAXN] ;
	char Address[MAXN] ;
} Student ;

struct node {
	Student student ;
	struct node* prev ;
	struct node* next ;
} ;
typedef struct node NODE ;

NODE** head ;

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
		printf("ID : %d / Age : %d / Score : %lf / Name : %s / Address : %s\n" , Entity->student.ID , Entity->student.Age , Entity->student.Score , Entity->student.Name , Entity->student.Address) ;
	return ;
}

void print_debug(NODE* Entity) {
	if ( Entity != NULL )
		printf("memory address : %x / ID : %d / next %x / prev %x\n" , Entity , Entity->student.ID , Entity->next , Entity->prev) ;
	return ;
}

void traverse() {
	NODE* cur = *head ;
	printf("###############################################################################################\n") ;
	while ( cur != NULL ) {
		print(cur) ;
		cur = cur->next ;
	}
	printf("###############################################################################################\n") ;
	return ;
}

int main() {
	init() ;
	while ( true ) {
		int condition ;
		printf("1)Add User    2)Delete User    3)Show All    4)Exit\n") ;
		scanf("%d" , &condition) , getchar() ;
		if ( condition == 1 ) {
			Student New_User ;
			printf("Name : ") ;
			gets(New_User.Name) ;
			printf("ID : ") ;
			scanf("%d" , &New_User.ID) ;
			printf("Age : ") ;
			scanf("%d" , &New_User.Age) ;
			printf("Score in BP : ") ;
			scanf("%lf" , &New_User.Score) , getchar() ;
			printf("Address : ") ;
			gets(New_User.Address) ;
			append(New_User) ;
		}	
		else if ( condition == 2 ) {
			int ID ;
			printf("ID : ") ;
			scanf("%d" , &ID) ;
			delete(ID) ;
		}
		else if ( condition == 3 )
			traverse() ;
		else
			break ;
	}
	return 0 ;
}
