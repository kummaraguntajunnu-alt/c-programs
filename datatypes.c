#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;
    printf("Size of int: %d bytes\n", sizeof(intType));
    printf("Size of float: %f bytes\n", sizeof(floatType));
    printf("Size of double: %d bytes\n", sizeof(doubleType));
    printf("Size of char: %Zu byte\n", sizeof(charType));
    
    return 0;
}
