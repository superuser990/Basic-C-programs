#include <stdio.h>
void main()
{
    int a, sum, count = 0;
ABC:
{
    printf("Enter the number ");
    scanf("%d", &a);
}
    if (a >= 1)
    {
        ++count;
        sum += a;
        goto POS;
    }
    else if (a == 0)
    {
        goto XYZ;
    }
    else
    {
        goto ABC;
    }
POS:
{
    printf("Count is %d\n", count);
    printf("Sum is %d\n", sum);
    goto ABC;
}
XYZ:
{
    printf("END END ");
}
}