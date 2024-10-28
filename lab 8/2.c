#include <stdio.h>

int main() {
    int start;

    printf("Enter an odd starting number: ");
    scanf("%d", &start);

    if (start % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 1;
    }

    
    for (int row = start; row > 0; row -= 2) {
        int current = row;
        
        for (int col = start; col >= current; col -= 2) {
            printf("%d ", col);
        }
        
        printf("\n");
    }

    return 0;
}
