#include <stdio.h>
#define PI 3.14159f

int main(void){

	float radius, volume;

	printf("Enter the radius (meter): ");
	scanf("%f", &radius);
	volume = (4.0f/3.0f) * PI * radius * radius * radius;

	printf("\nRadius of sphere (meter): %.2f\n", radius);
	printf("Volume of sphere (cubic meter): %.2f\n", volume);

	return 0;

}



