#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("\nEnter the Number of element you want to enter in the array: ");
    scanf("%d" ,&n);
    int *arr = (int*)calloc(n , sizeof(int));
    if(arr == NULL){
        printf("\nMemory not allocated ");
        exit(1);
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        printf("\nEnter the element %d: ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    for(int i = 0; i < n; i++){
        printf("\nElement %d: %d", i+1, arr[i]);
    }

    printf("\nThe sum of the given numbers is : %d", sum);

    free(arr);
    return 0;
}