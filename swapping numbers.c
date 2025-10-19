#include <stdio.h>

int main() {
    int num, first, last, temp, digits = 0, pow = 1, swapped;

    printf("Swap First and Last Digit ");
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = num % 10; 

    while (temp >= 10) {
        temp /= 10;
        digits++;
        pow *= 10;  
    }
    first = temp;

   if (pow == 1 && num < 10) {
        printf("Number after swapping = %d\n", num);
        return 0;
    }

    swapped = (num % pow) / 10;  
    swapped = (last * pow) + (swapped * 10) + first;

    printf("Number after swapping first and last digit = %d\n", swapped);

   
}
