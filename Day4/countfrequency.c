#include <stdio.h>

void findFrequency(int arr[], int n) {
    int i = 0;
    
    while (i < n) {
        int count = 1; 
        while (i + 1 < n && arr[i] == arr[i + 1]) {
            count++;
            i++;
        }
        printf("Element %d occurs %d times\n", arr[i], count);
        i++; 
    }
}


int main() {
    int arr[] = {1, 1, 1, 2, 2, 3, 3, 3, 3, 4};  // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Frequencies of elements in the sorted array:\n");
    findFrequency(arr, n);

    return 0;
}
