#include <stdio.h>

int main() {
    int i, j, rows, num = 1;
    printf("Rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    
}
