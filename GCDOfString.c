#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to find the GCD of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to check if t divides s
int isDivisible(char *s, char *t) {
    int lenS = strlen(s);
    int lenT = strlen(t);
    
    if (lenS % lenT != 0) return 0;  // Length check

    for (int i = 0; i < lenS; i++) {
        if (s[i] != t[i % lenT]) return 0;  // Pattern check
    }
    
    return 1;
}

// Function to find the largest common divisor string
char *gcdOfStrings(char *str1, char *str2) {
    int l1 = strlen(str1);//l1 represents length of first string
    int l2 = strlen(str2);  //l2 represents length of first string
    
    int gcdLen = gcd(l1, l2); // Find GCD of string lengths

    // Allocate memory for result
    char *result = (char *)malloc((gcdLen + 1) * sizeof(char)); 
    if (result == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    // Copy the first gcdLen characters of str1 to result
    strncpy(result, str1, gcdLen);
    result[gcdLen] = '\0'; // Null terminate the string

    // Check if result divides both str1 and str2
    if (isDivisible(str1, result) && isDivisible(str2, result)) {
        return result; // Return the largest common divisor string
    }

    // If no valid divisor is found, return an empty dynamically allocated string
    free(result); // Free the allocated memory
    char *emptyStr = (char *)malloc(1 * sizeof(char));
    emptyStr[0] = '\0'; // Empty string
    return emptyStr;
}
int main() {
                         // Predefined test cases
                         char str1[] = "ABCABC";
                         char str2[] = "ABC";
                     
                         // Find the largest common divisor string
                         char *result = gcdOfStrings(str1, str2);
                     
                         // Print the result
                         printf("GCD of Strings:\n\"%s\"\n", result);
                     
                         // Free allocated memory
                         free(result);
                     
                         return 0;
}