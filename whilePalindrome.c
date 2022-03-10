#include <stdio.h>
void main()
{
    int l, temp, n, rev;
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        l = n % 10;
        rev = rev * 10 + l;
        n = n / 10;
    }
    if (temp == rev)
    {
        printf("Its a palindrome");
    }
}