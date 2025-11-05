#include <stdio.h>

int main() {
    int arr[10], n, i;

    // Read the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the elements
    printf("The elements in the array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

