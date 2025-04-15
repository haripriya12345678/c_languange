#include<stdio.h>
char alphabet(char ch);
int main()
{
    char c;
    printf("Enter the character:");
    scanf("%c",&c);
    alphabet(c);
    return 0;
}
char alphabet(char ch)
{
    switch(ch)
    {
        case 'a':
        printf("it is a vowel");
        break;
        case 'e':
        printf("it is a vowel");
        break;
        case'i':
        printf("it is a vowel");
        break;
        case 'o':
        printf("it is a vowel");
        break;
        case 'u':
        printf("it is a vowel");
        break;
        default:
        printf("it is not a vowel");
    }
    return 0;
}