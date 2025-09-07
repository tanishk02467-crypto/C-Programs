#include <stdio.h>

int main() {
    int n, i, sum = 0;

    
    printf(" Sum of First n Natural Numbers \n");
    printf("Enter value of n: ");
    scanf("%d", &n);

   
    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    
    printf("\n");
    printf("Sum of first %d natural numbers = %d\n", n, sum);

    
}
