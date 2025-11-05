#include <stdio.h>

int main() {
    int arr[100], n, i, min;

    // Read the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize min with the first element
    min = arr[0];

    // Find the minimum element
    for(i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    // Display the minimum element
    printf("The minimum element in the array is: %d\n", min);

    return 0;
}

