#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf(" Check Perfect Number ");
    printf("Enter a number: ");
    scanf("%d", &num);

    
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

   
    if (sum == num && num != 0)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is NOT a Perfect Number.\n", num);

}
