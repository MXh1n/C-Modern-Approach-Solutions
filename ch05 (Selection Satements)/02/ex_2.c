#include <stdio.h>

int main(void){
    
    int hours, minutes;

    printf("Enter time in 24-hour: ");
    scanf("%d:%d", &hours, &minutes);

    if (hours == 12){

        printf("Equivalent 12-hour time: %.2d:%.2dpm\n", 12, minutes);
        
    }
    
    else if (hours >= 13 && hours <= 23){

        printf("Equivalent 12-hour time: %.2d:%.2dpm\n", hours-12, minutes);
   
    }
    
    else if (hours >= 1 && hours <= 11){

        printf("Equivalent 12-hour time: %.2d:%.2dam\n", hours, minutes);
    
    }
    
    else if (hours == 0) {

        printf("Equivalent 12-hour time: %.2d:%.2dam\n", 12, minutes);
    }

    else{
        printf("Invalid time\n");

    }

    return 0;
}
