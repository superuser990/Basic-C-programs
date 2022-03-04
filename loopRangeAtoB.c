#include <stdio.h>
void main()
{
    int a, b;
    printf("Please enter the range from lower to upper ");
    scanf("%d%d", &a, &b);
    if (a < b)
    {
        printf("Your output is \n");
        for (a = a; a <= b; a++)
        {
            printf("%d\n", a);
        }
    }
    else
    {
        printf("please input a grater number than %d", a);
    }
}