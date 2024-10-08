#include<stdio.h>

int main() {
	int first=1, second =2, third, count, limit; 

	printf( "Enter the limit (number of terms):\n");
	scanf("%d", &limit);
	printf("\n %d \n %d", first, second);
	third=first*second;
	
	for(count=2; count<=limit ; count++) {
	   printf("\n %d", third);
	   first=second;
	   second=third;
	   third=first*second;
	}

return 0;
}