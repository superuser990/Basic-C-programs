#include <stdio.h>
void main()
{
    int a, count = 0;
ABC:
{
    printf("Enter ");
    scanf("%d", &a);
}
    if (a == 0)
    {
        goto XYZ;
    }
    else
    {
        ++count;
        printf("Total inputs count %d\n", count);
        goto ABC;
    }

XYZ:
{
    printf("END ");
}
}