#include <stdio.h>

int main() {
    long int binary, ones_complement = 0;
    int remainder, place = 1;

    printf(" 1's Complement of Binary Number");
    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    while (binary > 0) {
        remainder = binary % 10;  

        if (remainder == 0)
            remainder = 1;
        else
            remainder = 0;

        ones_complement += remainder * place;
        place *= 10;

        binary /= 10;
    }

    printf("1's Complement = %ld\n", ones_complement);

    
}
