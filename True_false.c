//Print True (1) False (0) for following statements
// 1] if its sunday and its snowing -> true 
#include <stdio.h>
int main () {
    int IsSunday = 1;
    int IsSnowing = 1;
    printf("%d \n", IsSunday && IsSnowing );

// 2] if its monday or if its raining -> t[[rue
    int IsMonday = 1;
    int IsRaining = 0;
    printf("%d\n", IsMonday || IsRaining);

// 3] if a number is greater than 9 and less than 100
    int number;
    printf("Enter the number ; \n");
    scanf("%d", &number);
    printf("%d \n", (number > 9) && (number < 100));
    return 0;
}



