#include <stdio.h>

int main() {
    int num;

   
    printf(" Number Check \n");
    printf("Enter an integer: ");
    scanf("%d", &num);

    
    if (num >= 0) {
        if (num == 0) {
            printf("The number is Zero.\n");
        } else {
            printf("The number is Positive.\n");
        }
    } else {
        printf("The number is Negative.\n");
    }

   
}
