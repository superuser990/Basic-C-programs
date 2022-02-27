#include <stdio.h>
void main()
{
    int a, sum = 0, evensum = 0, oddsum = 0, countEven = 0, countOdd = 0;
ABC:
{
    printf("Enter the number ");
    scanf("%d", &a);
}
    if (a >= 1)
    {
        if (a % 2 == 0)
        {
            ++countEven;
            evensum += a;
            sum += a;
            goto EVEN;
        }
        else
        {
            ++countOdd;
            oddsum += a;
            sum += a;
            goto ODD;
        }
    }
    else if (a == 0)
    {
        goto XYZ;
    }
    else
    {
        goto ABC;
    }
EVEN:
{
    printf("even Count is %d\n", countEven);
    printf("EVEN SUM %d\n\n", evensum);

    printf("sum is %d\n", sum);
    goto ABC;
}
ODD:
{
    printf("Odd count is %d\n", countOdd);
    printf("ODD SUM %d\n\n", oddsum);
    printf("sum is %d\n", sum);
    goto ABC;
}
XYZ:
{
    printf("== END END ==\n\n");
    printf("even Count is %d\n", countEven);
    printf("EVEN SUM %d\n\n", evensum);
    printf("Odd count is %d\n", countOdd);
    printf("ODD SUM %d\n\n", oddsum);
    printf("sum is %d\n", sum);
}
}