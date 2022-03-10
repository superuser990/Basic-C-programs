#include <stdio.h>
void main()
{
    int a, l, n, evenSum = 0, oddSum = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        l = n % 10;
        printf(" l = %d\n", l);
        if (l % 2 == 0)
        {
            evenSum += l;
            printf(" evenSum = %d\n", evenSum);
        }
        else if (l % 2 == 1)
        {
            oddSum += l;
            printf(" oddSum = %d\n", oddSum);
        }
        n = n / 10;
        printf(" n = %d\n\n", n);
    }

    printf(" FINAL evenSum = %d\n", evenSum);
    printf(" FINAL oddSum = %d\n", oddSum);
}