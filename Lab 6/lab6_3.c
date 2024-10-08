#include <stdio.h>

int main() {
    int number, i;
    int isPrime = 1; // Assuming the number is prime

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 10 || number <= -10) {
        printf("%d is a multiple digit number.\n", number);
    } else {
        printf("%d is not a multiple digit number.\n", number);
    }

    if (number < 2) {
        printf("%d is not a prime number.\n", number);
    } else {
        for (i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                printf("%d is a composite number.\n", number);
                isPrime = 0;
                return 0;
            }
        }
        printf("%d is a prime number.\n", number);
    }

    return 0;
}
