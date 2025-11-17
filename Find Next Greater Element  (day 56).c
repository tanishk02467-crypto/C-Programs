#include <stdio.h>

int main() {
    int arr[] = {2, 3, 1, 4};  
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Next greater elements: ");
    for (int i = 0; i < n; i++) {
        int next = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }
        printf("%d", next);
        if (i < n - 1)
            printf(", ");
    }
    printf("\n");
}