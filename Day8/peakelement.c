#include <stdio.h>

int peakelement(int arr[], int n) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && 
            (mid == n - 1 || arr[mid + 1] <= arr[mid])) {
            return mid;
        }

        
        else if (mid > 0 && arr[mid - 1] > arr[mid]) {
            high = mid - 1;
        } 
        
        
        else {
            low = mid + 1;
        }
    }

    return -1;  
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int peakIndex = peakelement(arr, n);
    if (peakIndex != -1) {
        printf("Peak element is at index %d with value %d\n", peakIndex, arr[peakIndex]);
    } else {
        printf("No peak element found.\n");
    }

    return 0;
}
