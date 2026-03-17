#include <stdio.h>


int main(void){
	
	float loan_amount, int_rate, monthly_amount, int_factor, monthly_rate, remaining, remaining_1, remaining_2, remaining_3; //declaring

	//assingning
	printf("Enter loan amount: $");
	scanf("%f", &loan_amount);

	printf("Enter interest rate: ");
	scanf("%f", &int_rate);

	printf("Enter monthly payment: $");
	scanf("%f", &monthly_amount);
	
	remaining = loan_amount;
	monthly_rate = int_rate/(12 * 100.0f);
	int_factor = monthly_rate * remaining;
	remaining_1 = (loan_amount - monthly_amount) + int_factor;
	
	remaining = remaining_1;
	int_factor = monthly_rate * remaining;
	remaining_2 = (remaining_1 - monthly_amount) + int_factor;
	
	remaining = remaining_2;
	int_factor = monthly_rate * remaining;
	remaining_3 = (remaining_2 - monthly_amount) + int_factor;
	
	//statement
	printf("\nAmount remaining after first month: %.2f\n", remaining_1);
	printf("\nAmount remaining after second month: %.2f\n",remaining_2);
	printf("\nAmount remaining after third month: %.2f\n",remaining_3);

	return 0;

}
