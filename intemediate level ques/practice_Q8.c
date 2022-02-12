#include <stdio.h>
int main()
{
    char ch;

    printf("Enter any alphabet: ");

    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z'))
        printf("The entered character %c is a lowercase Alphabet",ch);
    else if (ch >= 'A' && ch <= 'Z')
        printf("The entered character %c is an uppercase Alphabet", ch);
    else
        printf("The entered character is not an Alphabet.");

    return 0;
}