#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
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