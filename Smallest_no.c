#include <stdio.h>
int main () {
    int a,b;
    printf("Enter your first number : \n");
    scanf("%d", &a);
    printf("Enter your second number : \n");
    scanf("%d", &b);

    if (a < b) {
    printf("The smallest digit is %d \n", a);
    } else {
        printf("The smallest digit is %d \n", b);
    }
    return 0;
}
