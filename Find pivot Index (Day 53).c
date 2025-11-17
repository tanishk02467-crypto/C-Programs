#include <stdio.h>

int findPivotIndex(int nums[], int size) {
    int totalSum = 0, leftSum = 0;

    for (int i = 0; i < size; i++) {
        totalSum += nums[i];
    }

    for (int i = 0; i < size; i++) {
        int rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum) {
            return i; /
        }
        leftSum += nums[i];
    }

    return -1; 
}

int main() {
    int nums[] = {1, 7, 3, 6, 5, 6};
    int size = sizeof(nums) / sizeof(nums[0]);

    int pivot = findPivotIndex(nums, size);
    printf("%d\n", pivot);

    return 0;
}