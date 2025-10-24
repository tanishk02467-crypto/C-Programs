#include <stdio.h>

int main() {
    int n, i, j, count;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++) {
        count = 0;

      
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                count = 1;
                break;
            }
        }

       
        if (count == 0)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
