#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter the length and breadth of Rectangle ");
    scanf("%d%d", &a, &b);
    printf("Area %d\n", (a * b));
    printf("Perimeter %d\n", (2 * (a + b)));
}