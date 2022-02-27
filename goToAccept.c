#include <stdio.h>
void main()
{
    int a;
ABC:
{
    printf("Enter the number ");
    scanf("%d", &a);
    printf("Your number is %d\n", a);
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
    printf("END END \n");
}
}