#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int numerator = 2, denominator = 3;

    printf(" Sum of Series: 2/3 + 4/7 + 6/11 + ... ");
    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (float)numerator / denominator;

        numerator += 2;    
        denominator += 4;   
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

}
