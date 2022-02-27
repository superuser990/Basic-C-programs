#include <stdio.h>
void main()
{
    int a, b;
    int choice;
    printf("PRESS 1 to Additon\n");
    printf("PRESS 2 to Subtract\n");
    printf("PRESS 3 to Divide\n");
    printf("PRESS 4 to Modulus\n");
    printf("Enter the choice : ");
    scanf("%d", &choice);
    printf("Enter the numbers");
    scanf("%d%d", &a, &b);
    switch (choice)
    {
    case 1:
    {
        printf("Addition is %d", (a + b));
        break;
    }

    case 2:
    {
        printf("Subtraction is %d", (a - b));
        break;
    }

    case 3:
    {
        printf("Division is %d", (a / b));
        break;
    }

    case 4:
    {
        printf("Modulus is %d", (a % b));
        break;
    }
    default:
        printf("Invalid choice");
        break;
    }
}