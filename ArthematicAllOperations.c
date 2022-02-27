#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter 2 numbers ");
    scanf("%d%d", &a, &b);
    printf("Addition %d\n", (a + b));
    printf("Subtraction %d\n", (a - b));
    printf("Divide %d\n", (a / b));
    printf("Modulus %d\n", (a % b));
}