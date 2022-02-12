// #include <stdio.h>

// int main()
// {
//     int num;
//     printf("Enter a number :");
//     scanf("%d", &num);
//     switch (num % 2 == 0)
//     {
//     case 1:
//         printf("%d is even.",num);
//         break;
//     case 0:
//         printf("%d is odd.",num);
//         break;

//     default:
//         printf("It is neither odd nor even.");
//         break;
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
	int a=13.45;
	float b=13.45;
	double c=13.45;
	
	printf("%d %f %lf", a, b ,c);
	return 0;
}
