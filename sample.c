#include <stdio.h>

int main() {
    char names[50];
    char *ptr = names;

    printf("Enter a name: ");
    scanf("%49s", names); // Leave space for the null terminator

    printf("0th position character: %c\n", names[0]);
    printf("0th position character using ptr: %c\n", *ptr);
    printf("0th position character using ptr[0]: %c\n", ptr[0]);

    return 0;
}