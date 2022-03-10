#include <stdio.h>
void main()
{
    int n, l, sum = 0, temp;
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        l = n % 10;
        //printf(" l is %d\n", l);
        sum += (l * l * l);
        //printf(" sum is %d\n", sum);
        n = n / 10;
        //printf(" n is %d\n\n", n);
    }
    printf("sum is %d\n", sum);
    if (sum == temp)
    {
        printf("Its a Armstrong");
    }
    else
    {
        printf("Not a arm strong");
    }
}