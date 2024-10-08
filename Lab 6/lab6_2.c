#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 10 || number <= -10) {
        printf("%d is a multiple digit number.\n", number);
    } else {
        printf("%d is not a multiple digit number.\n", number);
    }

    return 0;
}
