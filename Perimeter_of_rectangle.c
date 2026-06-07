#include <stdio.h>
int main () {
    float a;
    float b;
    printf("Enter the length of the rectangle : \n");
    scanf("%f", &a);
    printf("Enter the breadth of the reactangle : \n");
    scanf("%f", &b);
    printf("The perimeter of the reactangle is : \n%f", 2 * (a+b));
    return 0;
}
 