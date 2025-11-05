#include <stdio.h>

int main() {
    int age;

start:  // Label for backward jump
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0) {
        printf("Invalid age. Try again.\n");
        goto start;  // Go back to re-enter age
    }

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}
	
