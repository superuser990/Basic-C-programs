#include <stdio.h>
void main()
{
    int n, l, sum;
    scanf("%d", &n);
    while (n != 0)
    {
        l = n % 10;
        printf(" l = %d\n", l);
        sum = sum + l;
        printf(" sum = %d\n", sum);
        n = n / 10;
        printf(" n = %d\n\n", n);
    }
    printf("%d", sum);
}