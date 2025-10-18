#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    printf(" \n Check Armstrong Number \n");
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

   
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

   
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is NOT an Armstrong number.\n", num);

    
}
