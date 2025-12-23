#include <stdio.h>

int main(void){
    //A program that finds the largest and smallest integer out of 4

    int int1, int2, int3, int4;
    int largest, smallest;

    // Checking for largest
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &int1, &int2, &int3, &int4);
    
    if (int1 > int2 && int1 > int3 && int1 > int4){
        largest = int1;
    }
    else if (int2 > int1 && int2 > int3 && int2 > int4){
        largest = int2;
    }   
    else if (int3 > int1 && int3 > int2 && int3 > int4){
        largest = int3;
    }
    else if (int4 > int1 && int4 > int2 && int4 > int3){
        largest = int4;
    }

    printf("The largest integer: %d\n", largest);
    
    //Checking for smallest
    if (int1 < int2 && int1 < int3 && int1 < int4){
        smallest = int1;
    }
    else if (int2 < int3 && int2 < int4 && int2 < int1){
        smallest = int2;
    }
    else if (int3 < int2 && int3 < int4 && int3 < int1){
        smallest = int3;
    }
    else if (int4 < int2 && int4 < int3 && int4 < int1){
        smallest = int4;
    }
    
    printf("The smallest integer: %d\n", smallest);


   return 0;
}
