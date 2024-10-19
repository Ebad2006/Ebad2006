#include<stdio.h>

int main(){

	int arr[10], i;
	
	for(i=0; i<10; i++){
		printf("enter %d number: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("The original array : \n");
	printf("{");
	
	for(i=0; i<10; i++){
		printf("%d",arr[i]);
		if(i<9)
			printf(", ");
	}
	
	printf("}");
	
	printf("\nThe reversed array= \n");
	printf("{");
	
	for(i=9; i>=0; i--){
		printf("%d", arr[i]);
		if (i>0)
			printf(", ");
	}
	
	printf("}");
	
	return 0;
}