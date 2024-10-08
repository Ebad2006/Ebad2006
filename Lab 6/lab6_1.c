#include <stdio.h>

int main() {
    float total = 0.0;
    float input;
    
    while (1) {
        // Prompt the user for input
        printf("Enter a number (0 to exit): ");
        scanf("%f", &input);
               
        if (input == 0) {
            break;  // Exit the loop if the input is zero
        }        
       
        total = total+input;
        
        printf("Current total sum: %.2f\n", total);
    }

    printf("Final total sum: %.2f\n", total);
    return 0;
}
