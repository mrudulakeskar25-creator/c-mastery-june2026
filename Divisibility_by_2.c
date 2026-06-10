// check if the input number is divisible by 2 or not?
#include <stdio.h>
int main () {
    int num;
    printf("Enter the number to find if its divisible by 2 or not ; \n");
    scanf("%d", &num);
    printf("%d", num % 2 == 0);
    return 0;
}