#include <stdio.h>

int main(){
    int num, count=0;

    printf("Enter Number: ");
    scanf("%d", &num);

    while(num!=0)
    {
        count=count+(num&1);
        num=num>>1;
    }

    printf("The number of ones is %d", count);
    return 0;
}