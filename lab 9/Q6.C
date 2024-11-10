#include <stdio.h>

int max(int arr[], int n);
int min(int arr[], int n, int max);

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int max_num=max(arr, n);
    printf("Maximum Number in the given array is: %d\n", max_num);
    printf("Minimum Number in the given array is: %d", min(arr, n, max_num));

}

int max(int arr[], int n){
    int max=0;
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

int min(int arr[], int n, int max){
    int min=max;
    for(int i=0; i<n; i++){
        if(min>arr[i]) min=arr[i];
    }
    return min;
}