#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf(" Check Prime Number \n");
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is NOT a prime number.\n", num);
        return 0;
    }

   
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;  
            break;
        }
    }

    if (isPrime)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is NOT a Prime number.\n", num);

}
