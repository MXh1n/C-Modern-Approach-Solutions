#include <stdio.h>

int main(void){
	//declaring variables
	int amount, bill_20, bill_10, bill_5, bill_1;

	//assigning variables
	printf("Enter amount: $");
	scanf("%d", &amount);

	bill_20 = amount / 20;
	amount -= 20 * bill_20;
	bill_10 = amount / 10;
	amount -= 10 * bill_10;
	bill_5 = amount / 5;
	amount -= 5 * bill_5;
	bill_1 = amount / 1;

	//statements
	printf("\n$20 bills: %d\n", bill_20);
	printf("$10 bills: %d\n", bill_10);
	printf("$5 bills: %d\n", bill_5);
	printf("$1 bills: %d\n", bill_1);

	return 0;
}
