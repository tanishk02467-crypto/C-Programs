#include <stdio.h>

int main() {
    int num, remainder;
    long long product = 1;

    printf(" Product of Odd Digits");
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        num = -num;  

    if (num == 0) {
        printf("Product of odd digits = 0");
        return 0;
    }

    while (num > 0) {
        remainder = num % 10;

       
        if (remainder % 2 != 0) {
            product *= remainder;
        }

        num = num / 10;
    }

    
    
    if (product == 1)
        printf("No odd digits found in the number.\n");
    else
        printf("Product of odd digits = %lld\n", product);

   
}
