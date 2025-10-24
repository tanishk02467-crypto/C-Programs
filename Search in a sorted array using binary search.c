#include <stdio.h>

int main() {
    int n, i, key, low, high, mid;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements (in ascending order):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Enter the element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element %d found at index %d.\n", key, mid);
            return 0;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("Element %d not found in the array.\n", key);
  
}