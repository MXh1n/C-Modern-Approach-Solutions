#include <stdio.h>

int main(void){

    float largest_num=0, num;
    
    printf("Enter 0 to terminate\n");
    
    while (1){
        printf("Enter a number: ");
        scanf("%f", &num);

        if (num <= 0){
            break;
        }
        
        if (largest_num <= num){
            largest_num = num;
        }
    }

    if (largest_num > 0){
        printf("The largest number entered was: %.2f\n", largest_num);
    }
    else{
        printf("No number input");
    }


    return 0;
}
