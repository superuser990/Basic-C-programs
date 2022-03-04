#include <stdio.h>
void main()
{
    int a, sumEven = 0, sumOdd = 0;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
        {

            sumEven += i;
        }
        else if (i % 2 == 1)
        {
            sumOdd += i;
        }
    }
    printf("Sum of evens = %d\n", sumEven);
    printf("Sum of odd = %d", sumOdd);
}