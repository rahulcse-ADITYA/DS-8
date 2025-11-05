#include <stdio.h>

int main() {
    int arr[100], n, i, max;

    // Read the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max with the first element
    max = arr[0];

    // Find the maximum element
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    // Display the maximum element
    printf("The maximum element in the array is: %d\n", max);

    return 0;
}

