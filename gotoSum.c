#include <stdio.h>
void main()
{
    int a, sum;
ABC:
{
    printf("Enter the number ");
    scanf("%d", &a);
    sum += a;
    printf("sum is %d\n", sum);
}
    if (a == 0)
    {
        goto XYZ;
    }
    else
    {
        goto ABC;
    }
XYZ:
{
    printf("END END ");
}
}