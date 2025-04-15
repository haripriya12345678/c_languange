#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the given character :");
    scanf("%c",&ch);
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
