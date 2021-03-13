#include <stdio.h>
#include <stdbool.h>

#define init_cake_num 2
// Write your code here

/* global variable declaration */
// Write your code here
#define init_cookie_num 3
#define init_coffee_num 4

int choice ;

void menu(int cake, int cookie, int coffee) {
    printf("What do you want to order?\n");
    printf("1) cake : %d\n", cake);
    printf("2) cookie : %d\n", cookie);
    printf("3) coffee : %d\n", coffee);
}

void buy() {
    scanf("%d", &choice);

    /* local variable declaration */
    int pic = 0;

    /* static variable declaration */
    // Write your code here
	static int cake_count = init_cake_num ;
	static int cookie_count = init_cookie_num ;
	static int coffee_count = init_coffee_num ;
    switch (choice) {
        case 1:
            // Write your code here
	    if ( cake_count > 0 )
		cake_count -- ;
	    else
		printf("Sold Out!\n") ;
	    break ;
        case 2:
            // Write your code here
	    if ( cookie_count > 0 )
		cookie_count -- ;
	    else
		printf("Sold Out!\n") ;
	    break ;
        case 3:
            // Write your code here
	    if ( coffee_count > 0 )
		coffee_count -- ;
	    else
		printf("Sold Out!\n") ;
	    break ;
        case 5:
            printf("Do you want a picture?\n1) yes\n0) no\n");
            int a;
            scanf("%d", &a);
            if (a)
                pic++;
            break;
        default:
            // Write your code here
	    break ;
    }
	printf("%d %d %d\n" , cake_count , cookie_count , coffee_count) ;
    printf("pic num = %d\n", pic);
}

int main() {

    menu(init_cake_num, init_cookie_num, init_coffee_num);

    while(choice != 5)
        buy();

    printf("C U soon\n");

    return 0;
}
