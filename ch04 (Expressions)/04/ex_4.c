#include <stdio.h>

int main(void){
	
	int num, quotient;
	int oct1_digit, oct2_digit, oct3_digit, oct4_digit, oct5_digit;
	
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &num);
	
	quotient = num;
	oct5_digit = quotient % 8;
	quotient /= 8;
	oct4_digit = quotient % 8;
	quotient /= 8;
	oct3_digit = quotient % 8;	
	quotient /= 8;
	oct2_digit = quotient % 8;
	quotient /= 8;
	oct1_digit = quotient % 8;
	
	
	printf("\nIn octal, your number is: %d%d%d%d%d\n", oct1_digit, oct2_digit, oct3_digit, oct4_digit, oct5_digit);

	return 0;
}
