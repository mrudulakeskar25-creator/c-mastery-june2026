#include <stdio.h>
int main () {
    float avg1;
    float avg2;
    float avg3;
    printf("Enter first number \n");
    scanf("%f", &avg1);
    printf("Enter second number \n");
    scanf("%f", &avg2);
    printf("Enter third number \n");
    scanf("%f", &avg3);
    printf("The Average of three numbers is ; \n%f", (avg1 + avg2 + avg3) / 3);
    return 0;
}