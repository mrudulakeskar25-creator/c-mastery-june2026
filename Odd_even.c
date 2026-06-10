#include <stdio.h>
int main () {
    int x;
    printf("Enter the number to find whether its odd or even : \n");
    scanf("%d", &x);
    // even = 1
    // odd = 0
    printf("%d", x % 2 == 0);
    return 0;
}