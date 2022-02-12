
#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);
    int op;
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter the value of operation you need to perform: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Sum= %f", a + b);
        break;

    case 2:
        if (a > b)
        {
            printf("Difference= %f", a - b);
        }
        else
        {
            printf("Difference= %f", b - a);
        }

        break;

    case 3:
        printf("Product= %f", a * b);

        break;

    case 4:
        printf("Quotient= %f", a / b);

        break;

    default:
        printf("I am poor in mathematics...sorry.");
    }
    return 0;
}
