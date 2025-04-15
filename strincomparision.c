/*#include<stdio.h>
#include<string.h>
#define max 20
int comparisionstring(char *str1,char *str2);
int copyingstring(char *str1,char *str2);
int cancatinationstring(char *str1,char *str2);
int main()
{
          char str1[max],str2[max];
          printf("Enter the two strings1:");
          fgets(str1,max,stdin);
          str1[strcspn(str1,"\n")]=0;
          printf("Enter the two strings2:");
          fgets(str2,max,stdin);
          str2[strcspn(str2,'\n')]=0;
          comparisionstring(str1,str2);
          copyingstring(str1,str2);
          cancatenationstring(str1,str2);
          return 0;
}
int comparisionstring(char *str1,char *str2)
{
    if((strcmp(str1,str2))==0)
    {
        printf("string are same\n");

    }
    else{
        printf("strings are not same\n");
    }
    return 0;

}
int copyingstring(char *str1,char *str2)
{
    strcpy(str1,str2);
    strcpy(str1,"embedded");
    strcpy(str2,"systems");
    printf("%s\t  %s\t\n",str1,str2);
    return 0;
}
int cancatinationstring(char *str1,char *str2)
{
        strcat(str1,str2);
        printf("%s",str1);
}*/
#include <stdio.h>
#include <string.h>
#define MAX 100
// Function prototypes
int comparestring(char *str1, char *str2);
int copyingstring(char *str1, char *str2);
int concatenationstring(char *str1, char *str2);
int main() {
    char str1[MAX], str2[MAX];
    printf("Enter the first string: ");
    fgets(str1, MAX, stdin);
    //return the number of characters in the beginning of str1 that match any of the charactersin str2
    str1[strcspn(str1, "\n")] = 0; // Remove newline character
    printf("Enter the second string: ");
    fgets(str2, MAX, stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove newline character
    comparestring(str1, str2);
    concatenationstring(str1, str2);
    copyingstring(str1, str2);
    return 0;
}
// Function to compare strings
int comparestring(char *str1, char *str2) {
    if (strcmp(str1, str2) == 0) {
        printf("Strings are same\n");
    } else {
        printf("Strings are not same\n");
    }
    return 0;
}
// Function to copy strings
int copyingstring(char *str1, char *str2) {
    strcpy(str1, "embedded");
    strcpy(str2, "course");
    printf("%s %s\n", str1, str2);
    return 0;
}
// Function to concatenate strings
int concatenationstring(char *str1, char *str2) {
    strcat(str1, str2);
    printf("%s\n", str1);
    return 0;
}
