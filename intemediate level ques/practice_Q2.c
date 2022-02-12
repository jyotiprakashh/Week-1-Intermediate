#include <stdio.h>
#include <conio.h>
 
int main(){
    float length, width, area, perimeter;
    printf("Enter length of Rectangle: ");
    scanf("%f", &length);
    printf("Enter width of Rectangle: ");
    scanf("%f", &width);
    perimeter = 2*(length* width);
    area = length * width;
    printf("Area of Rectangle : %0.2f\n", area);
    printf("Perimetre of Rectangle : %0.2f\n", perimeter);
     
   
    return 0;
}