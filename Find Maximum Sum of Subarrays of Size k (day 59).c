#include <stdio.h>

int main() {
    int arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;  

    if (k > n) {
        printf("Window size k is larger than array size.\n");
        return 1;
    }

    int max_sum = 0;
    for (int i = 0; i < k; i++)
        max_sum += arr[i];

    int window_sum = max_sum;
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum)
            max_sum = window_sum;
    }

    printf("Maximum sum of subarrays of size %d: %d\n", k, max_sum);
}