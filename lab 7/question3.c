#include<stdio.h>

int main(){
	
	int arr[10], i, max, min;
	
	for(i=0; i<10; i++){
		printf("enter %d number: ", i+1);
		scanf("%d", arr[i]);
	}
	
	max=arr[0];
	min=arr[0];
	
	for(i=0; i<10; i++){
		if(arr[i]>max)
			max=arr[i];
		if(arr[i]<min)
			min=arr[i];
	}
	
	
	printf("The minimum number in array is: %d\n", min);
	printf("The maximum number in the array is: %d\n", max);
	
return 0;
}