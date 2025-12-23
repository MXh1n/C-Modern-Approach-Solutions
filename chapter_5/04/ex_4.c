#include <stdio.h>

int main(void){

    // wind speed description program

    int wind_speed;

    printf("Enter wind speed (in knots): ");
    scanf("%d", &wind_speed);

    // checking wind speed conditions
    if (wind_speed < 1){
        printf("Wind description: Calm\n");
    }

    else if (wind_speed >= 1 && wind_speed <= 3){
        printf("Wind description: Light air\n");
    }

    else if (wind_speed <= 27){ 
        printf("Wind description: Breeze\n");
    }

    else if (wind_speed <= 47){
        printf("Wind description: Gale\n");
    }

    else if (wind_speed <= 63){ 
        printf("Wind description: Storm\n");
    }
    
    else if (wind_speed > 63){
        printf("Wind description: Hurricane\n");
    }

    else{
        printf("Invalid wind speed\n");
    }

    return 0;
}
