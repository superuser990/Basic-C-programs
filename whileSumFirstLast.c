#include <stdio.h>

void main()
{
    int a, b = 0, n;
    scanf("%d", &n);
    a = n % 10;
    // printf("a = %d\n",a);
    while (n != 0)
    {
        n = n / 10;
        if ((n <= 9) && (n > 0))
        {
            b = n;
        }
    }
    //printf("b = %d\n",b);

    printf("Sum of first and last element is %d", b + a);
}