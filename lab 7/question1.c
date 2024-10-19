#include<stdio.h>
	int main(){
		int count=0, sum=0, i;
		printf("How many numbers you want to sum?\n");
		scanf("%d", &count);
		
		int arr[count];
		
		for(i=0; i<count; i++){
			printf("Enter %d number: ", i++);
			scanf("%d", &arr[i]);
			sum+=arr[i];
		}
		
		printf("\n{");
		
		for(i=0; i<count; i++){
			printf("%d", arr[i]);
			if(i<count-1)
				printf(", ");
		}
		
		printf("}\n");
		printf("the sum of the given numbers is= %d" ,sum);
		
	return 0;
	}