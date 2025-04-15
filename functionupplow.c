#include<stdio.h>
char upplow(char ch);
int main()
{
    char c;
    printf("Enter the given character:");
    scanf("%c",&c);
    upplow(c);
    return 0;
}
char upplow(char ch)
{
    if(ch>='a' && ch<='z')
    {
        printf("Given character is lowercase");
    }
    else
    {
        printf("Given character is uppercase");
    }
    return 0;
}