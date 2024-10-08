#include<stdio.h>

int main(){
	int a, limit, count;
	printf("Enter the initial number: \n");
	scanf("%d", &a);
	printf("Enter the number of terms:\n");
	scanf("%d", &limit);

	for(count=2; count<=limit; count++) {
	    printf(", %d",a); 
	    a=a/count;
	}

return 0;
}