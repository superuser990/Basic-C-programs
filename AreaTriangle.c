#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter the height, base , hypotenuse");
    scanf("%d%d%d", &a, &b, &c);
    printf("Area %f\n", (0.5 * a * b));
    printf("Perimeter %d\n", (a + b + c));
}