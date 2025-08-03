#include <stdio.h>

int main() {
    int num1, num2, sum, product;

    // Prompt user for the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Prompt user for the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Add the two numbers
    sum = num1 + num2;
    product = 2*(num1 * num2);

    // Display the result
    printf("Sum of %d and %d is %d\n", num1, num2, sum);
    printf("2 times product of %d and %d is %d\n", num1, num2, product);
    printf("testing automated build based on new commit\n");
    printf("commit on 03-aug\n");
    printf("commit to test jenkins\n");
    return 0;
}

