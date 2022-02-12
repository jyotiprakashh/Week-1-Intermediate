#include <stdio.h>
int main()
{
    float Fahrenheit, Celsius;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%d", &Fahrenheit);

    Celsius = ((Fahrenheit - 32) * 5) / 9;
    printf("\nTemperature in Celsius is : %f", Celsius);
    return (0);
}