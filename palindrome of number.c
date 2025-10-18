#include <stdio.h>

int main() {
    int num, originalNum, reversed = 0, remainder;

    printf(" Check Palindrome Number \n");
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;  

    
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

 
    if (originalNum == reversed)
        printf("%d is a Palindrome number.\n", originalNum);
    else
        printf("%d is NOT a Palindrome number.\n", originalNum);

   
}
