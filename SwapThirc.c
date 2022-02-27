#include <stdio.h>
void main()
{
    int a, b, temp;
    printf("Enter the values ");
    scanf("%d%d", &a, &b);
    printf("Current values places %d , %d \n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("Swapped values places %d , %d ", a, b);
}