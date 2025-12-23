#include <stdio.h>

int main(void){
    int m, n, remainder, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);
    
    while (1){
        
        if (n == 0){
            gcd = m; break;
        }

        remainder = m % n;
        m = n;
        n = remainder;
   
    }
    
    printf("Greatest common divisor: %d\n", gcd);


    return 0;
}
