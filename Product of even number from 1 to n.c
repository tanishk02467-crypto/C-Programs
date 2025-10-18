#include <stdio.h>

int main() {
    int n, i = 2;
    long long product = 1;

    printf("\n Product of Even Numbers from 1 to n \n");
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("No even numbers found in the range 1 to n %d.\n", n);
    } else {
        while (i <= n) {
            product *= i;
            i += 2;   
        }
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    }

    
}
