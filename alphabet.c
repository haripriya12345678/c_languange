#include<stdio.h>
int main()
{
    signed char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
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