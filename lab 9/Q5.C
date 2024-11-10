/*Name: Ebad Ali Siddiqui
Roll number: 24K-0882*/
#include <stdio.h>

void reverse(char str[], char reverse[]);

int main(){
    char str1[50], str2[50];
    printf("Enter string: ");
    fgets(str1, sizeof(str1), stdin);
    reverse(str1, str2);
    printf("Reversed string is: ");
    puts(str2);
}

void reverse(char str[], char reverse[]){
    int len=0;
    for(int i=0; str[i]!='\0'; i++){
        len++;
    }

    for(int i=0; str[i]!='\0'; i++){
        reverse[i]=str[len-i-1];
    }
    return;
}
