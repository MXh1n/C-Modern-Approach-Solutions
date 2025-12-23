#include <stdio.h>

int main(void){
    
    int numerator, denominator;
    int m, n, remainder, gcd; //for gcd calculation without changing the original values of numerator and denominator
    int l_num, l_denom; //lowest_numerator and lowest_denominator

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    m = numerator;
    n = denominator;

    //Calculating gcd
    while (n != 0){
        remainder = m % n;
        m = n;
        n = remainder;
    }

    gcd = m; // as n becomes zero m is the gcd
    
    l_num = numerator / gcd;
    l_denom = denominator / gcd;
    
    printf("In lowest terms: %d/%d\n", l_num, l_denom);

    return 0;
}
