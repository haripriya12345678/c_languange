/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i;
    printf("Enter the string:");
    for(i=0;i<20;i++)

    {
        scanf(" %s",&str[i]);
    }
    int length=strlen(str);
    printf("%d",length);

}*/


#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i;
    printf("Enter the string:");
    for(i=0;i<20;i++)
    {
    scanf(" %s",&str[i]);
    }
    //int length=strlen(str);
    //printf("%d",length);
    string(str);
}
int string(char* str[])
{
       int length =0;
       while(*str!='\0')
       {
            length++;
            str++;
       }
     return length;
     //return 0;
}