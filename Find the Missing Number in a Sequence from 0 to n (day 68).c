#include <stdio.h>

int main() {
    int nums[] = {0, 3, 2, 4};  
    int n = sizeof(nums) / sizeof(nums[0]);
    int expected_sum = (n * (n + 1)) / 2;
    int actual_sum = 0;

    for (int i = 0; i < n; i++) {
        actual_sum += nums[i];
    }

    int missing = expected_sum - actual_sum;
    printf("Missing number: %d\n", missing);

}