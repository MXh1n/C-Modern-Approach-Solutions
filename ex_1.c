#include <stdio.h>

int main(void){
    
    int num, digit=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (0 <= num && num <= 9){

        digit = 1;
    }
    
    else if (10 <= num && num <= 99) {

        digit = 2;

    }

    else if (100 <= num && num <= 999) {

        digit = 3;

    }
    
    else if (num >= 1000 && num <= 9999){
        digit = 4;
    }

    else{
        
        printf("\nInvalid number\n");

    }
    
    
    if (digit > 0){
        printf("The number %d has %d digits\n", num, digit);
    }
    else{
        printf("Can't compute.\n");
    }

    return 0;
}

