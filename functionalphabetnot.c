#include<stdio.h>
char alphabet(char ch);
int main()
{
    signed char c;
    printf("Enter the character:");
    scanf("%c",&c);
    alphabet(c);
    return 0;
}
char alphabet(char ch)
{
    if(ch>='a' && ch<='z'||ch >='A' && ch<='Z')
    {
        printf("Given character is alphabet");
    }
    else
    {
    printf("Given character is not alphabet");
    }
    return 0;

}