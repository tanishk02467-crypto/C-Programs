#include <stdio.h>


int fact(int n) {
    int i, f = 1;
    for (i = 1; i <= n; i++)
        f = f * i;
    return f;
}

int main() {
    int rows, i, j;
    printf("Rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        for (j = 0; j <= rows - i; j++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%d ", fact(i) / (fact(j) * fact(i - j)));
        }
        printf("\n");
    }
    
}
