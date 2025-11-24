#include <stdio.h>

int main() {
    int arr[] = {1, 3, 2, 5, 4, 3, 6};  
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;  

    if (k > n) {
        printf("Window size k is larger than array size.\n");
        return 1;
    }

    printf("Maximums in each subarray of size %d: ", k);
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > max)
                max = arr[i + j];
        }
        printf("%d ", max);
    }
    printf("\n");
}