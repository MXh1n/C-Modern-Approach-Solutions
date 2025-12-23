#include <stdio.h>

int main(void){
    /*This program converts a number and converts it to english word */


    int num, tens, ones;

    printf("Enter a two digit number (10-99): ");
    scanf("%d", &num);
    
    //the first digit stored in tens
    //second digit stores in ones
    tens = num / 10;
    ones = num % 10;

    printf("The number you entered is ");
    
    
    if (num >= 10 && num < 20){
       //This is special case
       switch (num){
            case 10: printf("ten\n"); break;
            case 11: printf("eleven\n"); break;
            case 12: printf("twelve\n"); break;
            case 13: printf("thirteen\n"); break;
            case 14: printf("fourteen\n"); break;
            case 15: printf("fifteen\n"); break;
            case 16: printf("sixteen\n"); break;
            case 17: printf("seventeen\n"); break;
            case 18: printf("eighteen\n"); break;
            case 19: printf("nineteen\n"); break;
        }
    }

    else{
        switch (tens){                             //All possible cases for first digit
            case 2: printf("twenty"); break;
            case 3: printf("thirty"); break;
            case 4: printf("forty"); break;
            case 5: printf("fifty"); break;
            case 6: printf("sixty"); break;
            case 7: printf("seventy"); break;
            case 8: printf("eighty"); break;
            case 9: printf("ninety"); break;
        }

        switch (ones){                            //All possible cases for second digit
            case 1: printf("-one\n"); break;
            case 2: printf("-two\n"); break;
            case 3: printf("-three\n"); break;
            case 4: printf("-four\n"); break;
            case 5: printf("-five\n"); break;
            case 6: printf("-six\n"); break;
            case 7: printf("-seven\n"); break;
            case 8: printf("-eight\n"); break;
            case 9: printf("-nine\n"); break;
            
            default: printf("\n"); break; //This makes sure when number like 20 is printed we still have \n
        }
    }

    return 0;
}
