#include <stdio.h>
int main()  
{  
    int num1, num2;  
    int sum, diff, mult;  
    float div;  
  
    
    printf("Write any two numbers : ");  
    scanf("%d%d", &num1, &num2);  
  
  
    sum = num1 + num2;  
    diff = num1 - num2;  
    mult = num1 * num2;  
    div = (float)num1 / num2;  
    
  
    printf("The sum of the given numbers : %d\n", sum);  
    printf("The difference of the given numbers : %d\n", diff);  
    printf("The product of the given numbers : %d\n", mult);  
    printf("The quotient of the given numbers : %f\n", div);  
     
  
    return 0;   
} 