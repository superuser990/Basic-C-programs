#include <stdio.h>
void main()
{
    int l, n, rev = 0, temp;
    scanf("%d", &n);
    while (n != 0)
    {
        l = n % 10;
        rev = rev * 10 + l;
        n = n / 10;
    }
    printf("REVERSE %d", rev);
}