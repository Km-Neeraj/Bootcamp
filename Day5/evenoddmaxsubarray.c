#include <stdio.h>

// Function to find the longest even-odd subarray
int longestEvenOddSubarray(int a[], int n) {
    int ans = 1; // Maximum length found
     
    // Iterate through the array
    for (int i = 0; i < n; i++) {
        int cnt = 1; // Current alternating sequence length
        
        // Check each subarray from index i
        for (int j = i + 1; j < n; j++) {
            if ((a[j - 1] % 2 == 0 && a[j] % 2 != 0) || (a[j - 1] % 2 != 0 && a[j] % 2 == 0))
                cnt++;  // Increase count if alternate even-odd
            else
                break;  // Stop when condition breaks
        }
        // Store max length
        if (cnt > ans)
            ans = cnt;
    }
    
    // If max length is 1, return 0 (since alternating needs at least 2 elements)
    return (ans == 1) ? 0 : ans;
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6,7, 8,9};  
    int n = sizeof(a) / sizeof(a[0]);

    printf("Longest Even-Odd Subarray Length: %d\n", longestEvenOddSubarray(a, n));

    return 0;
}
