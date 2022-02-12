#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    switch (num1 > num2)
    {
    case 1:
        printf("%d is the greatest.", num1);
        break;
    case 0:
        printf("%d is the greatest.", num2);
        break;

    default:
        printf("Please give some valid numbers man!");
        break;
    }
    return 0;
}