#include <stdio.h>

int main(void){
	
	float amount, sum;

	printf("Enter amount: $");
	scanf("%f", &amount);
	
	sum = (5.0f/100.0f) * amount + amount;

	printf("\n---- With 5 percent tax ----\n");
	printf("Amount: $%.2f\n", amount);
	printf("New amount: $%.2f\n", sum);
	
	return 0;

}
