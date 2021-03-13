// BWOTSHECHB

// forgot to include the stdio.h library
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Main -> main
int main() {
    double num1, num2;                 // input values
    char op;                        // operator
    double result;                     // output

	// Printf -> printf
    printf("Choose operation to perform (+, -, *, /, %%, sin, cos, tan): ");
	// need & before input variable
    scanf(" %c", &op);

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
	// add a semicolon to the end of the line
    scanf("%lf", &num2) ;

    // do the operation
    if(op == '+') {
        // the part that calculates the sum of two numbers
        result = num1 + num2;
    }
    else if(op == '-') {
        // the part that calculates the difference of two numbers
        result = num1 - num2;
    }
    else if(op == '*') {
        // the part that calculates the product of two numbers
        result = num1 * num2;
    }
    else if(op == '/') {
        // the part that calculates the division of two numbers
        // if denominator equals to zero exit the program
        if(num2 == 0.0) {
            printf("invalid input! divide by zero\n");
            return -1;
        }
        else {
            result = num1 / num2;
        }
    }
    else if(op == '%') {
        // the part that calculates the remainder of a number over another number
	// only works for integers
        result = (int)num1 % (int)num2;
    }
	// convert rad to deg for all trig functions
    else if(op == 's') {
        // check division by zero
	if(num2 == 0.0) {
                printf("invalid input! divide by zero\n");
                return -1;
        }
        // the part that calculates sine of an angle
	result = sin(num1 / num2 * (M_PI / 180));
    }
    else if(op == 'c') {
	// check division by zero
        if(num2 == 0.0) {
                printf("invalid input! divide by zero\n");
                return -1;
        }
        //the part that calculates the cosine of an angle
        result = cos(num1 / num2 * (M_PI / 180));
    }
    else if(op == 't') {
	// check division by zero
        if(num2 == 0.0) {
                printf("invalid input! divide by zero\n");
                return -1;
        }
        // the part that calculates the tangent of an angle
        result = tan(num1 / num2 * (M_PI / 180));
    }

    // print result
    if(op == 's') {
        printf("result : sin(%lf/%lf) = %lf\n", num1, num2, result);
    }
    else if(op == 'c') {
        printf("result : cos(%lf/%lf) = %lf\n", num1, num2, result);
    }
    else if(op == 't') {
	// tan of kPI + PI/2 is undefined
	if ( (int)(num1 / num2 - 90.0) % 180 == 0 )
		printf("this value is undefined\n") ;
	else
		printf("result : tan(%lf/%lf) = %lf\n", num1, num2, result);
    }
    else {
        printf("result : %lf %c %lf = %lf\n", num1, op, num2, result);
    }

    return 0;
}

