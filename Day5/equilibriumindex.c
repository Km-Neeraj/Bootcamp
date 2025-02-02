#include <stdio.h>
void findEquilibrium(int arr[], int n) {
  
    // Check for indexes one by one until
    // an equilibrium index is found
    printf("Eqilibrium indexes\n");
    for (int i = 0; i < n; ++i) {
        
        // Get left sum
        int leftSum = 0;
        for (int j = 0; j < i; j++)
            leftSum += arr[j];

        // Get right sum
        int rightSum = 0;
        for (int j = i + 1; j < n; j++)
            rightSum += arr[j];

        // If leftsum and rightsum are same, then 
        // index i is an equilibrium index
       // printf("Equilibrium indexes\n");
        if (leftSum == rightSum)
        {
          //printf("equilibrium indexes\n");
           printf("%d ",i);
        }
            
    }

    // If equilibrium index doesn't exist
}

int main() {
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    findEquilibrium(arr, n);
    return 0;
}
