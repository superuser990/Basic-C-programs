#include <stdio.h>
void main()
{
    int choice, a, b, c;

    printf(" == AREA == \n");
    printf("PRESS 1 for Square\n");
    printf("PRESS 2 for Rectangle\n");
    printf("PRESS 3 for Triangle\n");
    printf("PRESS 4 for Circle\n");
    printf("Enter your choice\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        printf("Enter side of Square : ");
        scanf("%d", a);
        printf("Area is %d", (a * a));
        break;
    }

    case 2:
    {
        printf("Enter length, breadth for Rectangle : ");
        scanf("%d%d", &a, &b);
        printf("Area is %d", (a * b));
        break;
    }

    case 3:
    {
        printf("Enter base,height for Triangle : ");
        scanf("%d%d", &a, &b);
        printf("Area is %f", (0.5 * a * b));
        break;
    }

    case 4:
    {
        printf("Enter radius for Circle : ");
        scanf("%d", &c);
        printf("Area is %f", (3.14 * c * c));
    }
    default:
    {
        printf("Invalid");
        break;
    }
    }
}