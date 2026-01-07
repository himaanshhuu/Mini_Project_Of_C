#include <stdio.h>

int main() {
    int number, originalNumber, reversedNumber = 0, digit;

    // Ask user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Store the original number
    originalNumber = number;

    // Reverse the number using a while loop
    while (number > 0) {
        digit = number % 10;                 // Extract last digit
        reversedNumber = (reversedNumber * 10) + digit;
        number = number / 10;                // Remove last digit
    }

    // Check palindrome condition
    if (originalNumber == reversedNumber) {
        printf("Palindrome Number\n");
    } else {
        printf("Not a Palindrome Number\n");
    }

    return 0;
}
