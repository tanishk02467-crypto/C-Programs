#include <stdio.h>

int findCeilIndex(int arr[], int size, int x) {
    int low = 0, high = size - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            result = mid;       
            high = mid - 1;     
        } else {
            low = mid + 1;
        }
    }

    return result;
}

int main() {
    int arr[] = {1, 1, 2, 8, 10, 11, 12, 19};
    int x;
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Enter x: ");
    scanf("%d", &x);

    int index = findCeilIndex(arr, size, x);
    printf("%d\n", index);

}