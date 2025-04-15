#include<stdio.h>
char intdigitspec(int ch);
int main()
{
    char c;
    printf("Enter the given character :");
    scanf("%c",&c);
    intdigitspec(c);
    return 0;
}
char intdigitspec(int ch)
{
    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
    {
        printf("Given is character");
    }
    else if(ch>='0'&&ch<='9')
    {
        printf("Given is integer");

    }  
    else{
        printf("it is a special character");
    }
    return 0;
}
