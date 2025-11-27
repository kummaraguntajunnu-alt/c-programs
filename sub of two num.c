#include <stdio.h>

int main() {
    int num1, num2, diff;
    printf("first number: ");
    scanf("%d", &num1);
    printf("second number: ");
    scanf("%d", &num2);
    diff = num1 - num2;
    printf("Difference is: %d\n", diff);
    return 0;
}
