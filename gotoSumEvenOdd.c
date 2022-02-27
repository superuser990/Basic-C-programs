#include <stdio.h>
void main()
{
    int a, evensum = 0, oddsum = 0, countEven = 0, countOdd = 0;
ABC:
{
    printf("Enter the number ");
    scanf("%d", &a);
}
    if (a != 0)
    {
        if (a % 2 == 0)
        {
            ++countEven;
            evensum += a;
            goto EVEN;
        }
        else
        {
            ++countOdd;
            oddsum += a;
            goto ODD;
        }
    }
    else
    {
        goto XYZ;
    }
EVEN:
{
    printf("even Count is %d\n", countEven);
    printf("EVEN SUM %d\n\n", evensum);
    goto ABC;
}
ODD:
{
    printf("Odd count is %d\n", countOdd);
    printf("ODD SUM %d\n\n", oddsum);
    goto ABC;
}
XYZ:
{
    printf("== END END ==\n\n");
    printf("even Count is %d\n", countEven);
    printf("EVEN SUM %d\n\n", evensum);
    printf("Odd count is %d\n", countOdd);
    printf("ODD SUM %d\n\n", oddsum);
}
}