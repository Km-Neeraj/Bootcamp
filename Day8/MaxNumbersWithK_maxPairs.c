#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int maxOperations(int *nums, int numsSize, int k) {
    qsort(nums, numsSize, sizeof(int), compare);
    int left = 0, right = numsSize - 1, count = 0;
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == k) {
            count++;
            left++;
            right--;
        } else if (sum < k) {
            left++;
        } else {
            right--;
        }
    }
    return count;
}

int main() {
    int nums[] = {1, 2, 3, 4};  // Example array
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int k = 5;

    int result = maxOperations(nums, numsSize, k);
    printf("Maximum number of operations: %d\n", result);

    return 0;
}
