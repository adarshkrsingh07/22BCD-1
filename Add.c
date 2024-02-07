#include <stdio.h>

int main() {
    int num, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num + num2;

    printf("Sum of the entered numbers: %d", sum);

    return 0;
}
