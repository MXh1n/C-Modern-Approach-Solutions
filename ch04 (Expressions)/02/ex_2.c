#include <stdio.h>

int main(void){
	
	int num, quotient, r1_digit, r2_digit, r3_digit;

	printf("Enter three-digit number: ");
	scanf("%d", &num);
    	
	r1_digit = num % 10;
    
    //splitting the last two digits
    quotient = num / 10;
	r2_digit = quotient % 10;
	r3_digit = quotient / 10;		

	printf("\nThe reversal is: %d%d%d\n", r1_digit, r2_digit, r3_digit);

	
	return 0;
}
