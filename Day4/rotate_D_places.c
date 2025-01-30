#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void leftRotate(int arr[], int n, int d) {
    d = d % n;  // Handle cases where d > n
    reverse(arr, 0, d - 1);    // Step 1: Reverse first d elements
    reverse(arr, d, n - 1);    // Step 2: Reverse remaining elements
    reverse(arr, 0, n - 1);    // Step 3: Reverse the entire array
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d;

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &d);

    printf("Original array: ");
    printArray(arr, n);

    leftRotate(arr, n, d);

    printf("Array after left rotation: ");
    printArray(arr, n);

    return 0;
}
