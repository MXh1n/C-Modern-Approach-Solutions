#include <stdio.h>

int main(void){

    int tens;
    int grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100){
        printf("Invalid numerical grade.\n");
    }

    //Storing the first digit in tens, eg 14, tens = 1
    tens = grade / 10;

    //switch statement cant be used for case 10 so handling grade = 100 case outside
    if (grade == 100){
        printf("Letter grade: A\n");
    }


    //Here first digit from 0-9 is handelled
    switch (tens){
        
        case 0: case 1: case 2: case 3: case 4: case 5: printf("Letter grade: F\n"); break;
        case 6: printf("Letter grade: D\n"); break;
        case 7: printf("Letter grade: C\n"); break;
        case 8: printf("Letter grade: B\n"); break;
        case 9: printf("Letter grade: A\n"); break;

    }
    

    return 0;
}

