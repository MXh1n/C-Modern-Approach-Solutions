#include <stdio.h>

int main(void){
    
    int row1_1, row1_2, row1_3, row1_4;
    int row2_1, row2_2, row2_3, row2_4;
    int row3_1, row3_2, row3_3, row3_4;
    int row4_1, row4_2, row4_3, row4_4;
    int sum_row1, sum_row2, sum_row3, sum_row4;
    int sum_column1, sum_column2, sum_column3, sum_column4;
    int sum_diagonal1, sum_diagonal2; 

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
            &row1_1, &row1_2, &row1_3, &row1_4,
            &row2_1, &row2_2, &row2_3, &row2_4,
            &row3_1, &row3_2, &row3_3, &row3_4,
            &row4_1, &row4_2, &row4_3, &row4_4
            );
    
    //calculating row sum
    sum_row1 = row1_1 + row1_2 + row1_3 + row1_4; 
    sum_row2 = row2_1 + row2_2 + row2_3 + row2_4; 
    sum_row3 = row3_1 + row3_2 + row3_3 + row3_4; 
    sum_row4 = row4_1 + row4_2 + row4_3 + row4_4; 
    
    //calculating column sum
    sum_column1 = row1_1 + row2_1 + row3_1 + row4_1;
    sum_column2 = row1_2 + row2_2 + row3_2 + row4_2;
    sum_column3 = row1_3 + row2_3 + row3_3 + row4_3;
    sum_column4 = row1_4 + row2_4 + row3_4 + row4_4;
    
    //calculating diagonal sum
    sum_diagonal1 = row1_1 + row2_2 + row3_3 + row4_4;
    sum_diagonal2 = row1_4 + row2_3 + row3_2 + row4_1;

    //output
    printf("\n%d %d %d %d\n", row1_1, row1_2, row1_3, row1_4);   
    printf("%d %d %d %d\n", row2_1, row2_2, row2_3, row2_4);   
    printf("%d %d %d %d\n", row3_1, row3_2, row3_3, row3_4);   
    printf("%d %d %d %d\n", row4_1, row4_2, row4_3, row4_4);   
    
    printf("\nRow sums: %d %d %d %d", sum_row1, sum_row2, sum_row3, sum_row4);
    printf("\nColumn sums: %d %d %d %d", sum_column1, sum_column2, sum_column3, sum_column4);
    printf("\nDiagonal sums: %d %d", sum_diagonal1, sum_diagonal2);
	return 0;
}
