#include <stdio.h>
#include <stdlib.h>

int main()
{int choice;
float a,b;

    printf("menu:\n");
    printf("1. Add\n2.  subtract\n3.  multiple\n4.  divide\n5");
    printf("enter the choice (1-4) :");
    scanf("%d", &choice);

    printf("enter two number: ");
    scanf("%f  %f", &a, &b);

    switch (choice)  {
case 1:
    printf("Result = %.2f", a +b);
    break;
case 2:
    printf("Result = %.2f", a -b);
    break;
case 3:
    printf("Result = %.2f", a *b);
    break;
case 4:
    if (b != 0)
    printf("Result = %.2f", a / b);
    else
        printf("Error: Division by zero!");
    break;
default:
    printf("invalid choice.");

    }
    return 0;
}
