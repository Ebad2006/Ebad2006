#include <stdio.h>

int main(){
    int age;
    
    printf("Enter your age: \n");
    scanf("%d", &age);
    
    if (age<0) {
        printf("Invalid age");
    }
        else if (age<=12) {
            printf("You are a child");}
            else if (age<=19) {
                printf("You are a teenager");}
                else if (age<=60) {
                    printf("You are an adult");}
                    else {
                        printf("You are a senior");
                    }
return 0;
}