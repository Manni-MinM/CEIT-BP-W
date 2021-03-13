// BWOTSHEWCHB 

#include <stdio.h>

int main() {
	FILE* test = fopen("test.txt" , "wb") ;
	char* str = "Hello World" ;
	fwrite(str , sizeof(char) , 11 , test) ;
	fclose(test) ;
	return 0 ;
}
