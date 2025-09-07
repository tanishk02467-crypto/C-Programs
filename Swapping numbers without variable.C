#include <stdio.h>

int main() {
    int a, b;

    
    printf("----- Swap Without Third Variable -----\n");
    printf("Enter first number  : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);

    
    printf("\nBefore Swapping: a = %d, b = %d\n", a, b);


    a = a + b;
    b = a - b;
    a = a - b;

    
    printf("After Swapping : a = %d, b = %d\n", a, b);

}
