#include <stdio.h>

int main() {

    int start, end;

    printf("Enter the starting value of the range: ");
    scanf("%d", &start);
    printf("Enter the ending value of the range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);


    for (int num = start; num <= end; num++){
        int isPrime = 1;  

        if (num < 2){
            continue;
        }

        
        for (int i = 2; i * i <= num; i++){
            if (num % i == 0){  
                isPrime = 0;
                break;
            }
        }

       
        if (isPrime){
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
