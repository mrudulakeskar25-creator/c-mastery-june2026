// Write a program to check if given character is digit or not.

#include<stdio.h>
int main () {
    char xyz;
    printf("Enter the character : \n");
    scanf("%c", &xyz);
    printf("%d \n", xyz >= '0' && xyz <= '9');
    // 1 FOR IT IS A DIGIT, 0 FOR NON DIGIT
    return 0;
}
