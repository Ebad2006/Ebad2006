#include<stdio.h>

int main() {
	int n, i;
	
	printf("Size of array: ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter %d elements: \n", n);
for(i=0; i<n; i++){
	scanf("%d",&arr[i]);
}

for(i=0; i<n; i++){
	if (arr[i]>arr[i+1]){
		int temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
		i=-1;
	}
}


int foundduplicate=0;
for(i=0; i<n-1; i++){
	if(arr[i]==arr[i+1]){
		printf("Duplicate found: ");
		printf("%d", arr[i]);
		foundduplicate=1;
	}
}

if(!foundduplicate){
	printf("Duplicate not found.");
}
return 0;
}
	