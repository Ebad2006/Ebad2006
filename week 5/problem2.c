#include <stdio.h>

int main(){
	int num;
	
	printf("Eneter a number.\n");
	scanf("%d", &num);
	if (num>0){
	    printf("The number is positive\n");
	    if (num%2==0){
	        printf("The number is even");}
	       else{
	           printf("The number is odd");}
	    }
	    else if (num<0){
	        printf ("the number is negative");
	    }
	    else{
	        printf("the number is 0");
	    }
	return 0;
}
	